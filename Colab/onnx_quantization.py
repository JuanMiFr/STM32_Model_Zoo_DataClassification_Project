#Quantization done in google colab!!

# Clone STM32 model zoo services
!git clone https://github.com/STMicroelectronics/stm32ai-modelzoo-services.git
%cd stm32ai-modelzoo-services

# Install deps
!pip install -r requirements.txt
!pip install onnx onnxruntime




from google.colab import files

uploaded = files.upload()
MODEL_PATH = "mobilenet_a025_pt.onnx"
QUANT_MODEL_PATH = "mobilenet_a025_pt_int8.onnx"


import torchvision
import torchvision.transforms as transforms
from torch.utils.data import DataLoader
import torch

transform = transforms.Compose([
    transforms.Resize((224, 224)),
    transforms.ToTensor(),
])

dataset = torchvision.datasets.CIFAR100(
    root="./data",
    train=True,
    download=True,
    transform=transform
)

#subset_size = 300
#subset = torch.utils.data.Subset(dataset, list(range(subset_size)))
loader = DataLoader(dataset, batch_size=1, shuffle=True)



import onnx
import numpy as np
import onnxruntime as ort
from onnxruntime.quantization import CalibrationDataReader
# Update MODEL_PATH to the correct uploaded filename
# The 'uploaded' variable contains the actual name of the file saved by files.upload()
MODEL_PATH = list(uploaded.keys())[0]

model = onnx.load(MODEL_PATH)
input_name = model.graph.input[0].name

print("INPUT NAME:", input_name)

mean = np.array([0.5071, 0.4867, 0.4408], dtype=np.float32).reshape(1,3,1,1)
std  = np.array([0.2675, 0.2565, 0.2761], dtype=np.float32).reshape(1,3,1,1)
class DataReader:
    def __init__(self, loader, input_name, max_samples=300):
        self.loader = loader
        self.input_name = input_name
        self.data_iter = iter(loader)
        self.count = 0
        self.max_samples = max_samples

    def get_next(self):
        if self.count >= self.max_samples:
            return None

        try:
            images, _ = next(self.data_iter)
        except StopIteration:
            return None

        images = images.numpy().astype(np.float32)

        # NORMALISATION (TRÈS IMPORTANT)
        images = (images - mean) / std

        self.count += 1
        return {self.input_name: images}

import numpy as np
from onnxruntime.quantization import quantize_static, QuantType
session_2 = ort.InferenceSession(QUANT_MODEL_PATH)
input_name_2 = session_2.get_inputs()[0].name
print("Input name:", input_name)
dr = DataReader(loader, input_name_2)

quantize_static(
    model_input=MODEL_PATH,
    model_output=QUANT_MODEL_PATH,
    calibration_data_reader=dr,
    weight_type=QuantType.QInt8,
    activation_type=QuantType.QInt8
)

print("Quantization DONE")

import onnxruntime as ort
import numpy as np
from sklearn.metrics import accuracy_score, precision_score, recall_score, f1_score

def evaluate_model(model_path, dataloader, mean, std):
    session = ort.InferenceSession(model_path)
    input_name = session.get_inputs()[0].name

    all_preds = []
    all_labels = []

    for images, labels in dataloader:
        # → numpy + float32
        images = images.numpy().astype(np.float32)

        # → normalisation (IMPORTANT)
        images = (images - mean) / std

        # → inference
        outputs = session.run(None, {input_name: images})

        # → logits → prédictions
        preds = np.argmax(outputs[0], axis=1)

        all_preds.extend(preds)
        all_labels.extend(labels.numpy())

    # 🔹 métriques
    acc = accuracy_score(all_labels, all_preds)
    precision = precision_score(all_labels, all_preds, average="macro")
    recall = recall_score(all_labels, all_preds, average="macro")
    f1 = f1_score(all_labels, all_preds, average="macro")

    return acc, precision, recall, f1

# modèle normal
acc, prec, rec, f1 = evaluate_model(MODEL_PATH, loader, mean, std)

print("mobilenetv2_a025 non quantifié")
print(f"Accuracy  : {acc:.4f}")
print(f"Precision : {prec:.4f}")
print(f"Recall    : {rec:.4f}")
print(f"F1-score  : {f1:.4f}")

# modèle quantifié
acc_q, prec_q, rec_q, f1_q = evaluate_model(QUANT_MODEL_PATH, loader, mean, std)

print("\nmobilenetv2_a025 quantifié(INT8)")
print(f"Accuracy  : {acc_q:.4f}")
print(f"Precision : {prec_q:.4f}")
print(f"Recall    : {rec_q:.4f}")
print(f"F1-score  : {f1_q:.4f}")
