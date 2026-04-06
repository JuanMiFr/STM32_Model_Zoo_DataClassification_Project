## STM32 AI Integration

This section explains how to integrate your ONNX model into the STM32 AI pipeline.

---

### Replace `stm32ai_main.py`
If you keep having issues with the buildIn dataloader of ST model Zoo dataloader, this main have a custom make dataloader to avoid problems with the original one used by ST.

#### Steps:

1. Replace the existing `stm32ai_main.py` with your custom version or mine in this repository
2. Ensure the following parameters match your model:

* **Input size**

  ```python
  (224, 224)
  ```

* **Normalization (for cifar100 dataset)**

  ```python
  mean = [0.5071, 0.4867, 0.4408]
  std  = [0.2675, 0.2565, 0.2761]
  ```

* **Data format**

  * `float32`
  * Shape: `(1, 3, 224, 224)`
  * Channel order: `RGB`

---

###  Update `user_config.yaml`

This file defines the global STM32 AI configuration if running with TensorFlow framework.

#### Example:

```yaml
model:
  name: mobilenet
  input_shape: [1, 3, 224, 224]

preprocessing:
  rescale: false
```

#### Important:

* `input_shape` must match your ONNX model
* Disable preprocessing if normalization is already done in code

---

### Update `user_config_pt.yaml`

This file specifies the model path.

#### Non-quantized model:

```yaml
model:
  model_path: mobilenet_a025_pt.onnx
```

#### Quantized model (INT8):

```yaml
model:
  model_path: mobilenet_a025_pt_int8.onnx
```

---

### Critical Consistency Checks

Make sure preprocessing is **strictly identical** across:

* PyTorch training
* ONNX inference
* STM32 deployment

---

### Tips

* INT8 quantization:

  *  Faster inference
  *  Smaller model size
  *  Slight accuracy drop possible

* Always validate:

  * ONNX vs STM32 outputs
  * Metrics after quantization
