# STM32_Model_Zoo_DataClassification_Project


graph TD
    A[Entraînement PyTorch - 5 epochs] --> B[MobileNetV2 α=0.25 + CIFAR-100]
    B --> C[Précision: 55%]
    C --> D[Export ONNX]
    D --> E{PTQ - Deux approches}
    
    E --> F[Approche A<br>ST Toolchain]
    E --> G[Approche B<br>ONNX Runtime Colab]
    
    F --> H[Calibration<br>sur 10 images]
    G --> I[Calibration<br>sur >100 images]
    
    H --> J[PTQ INT8]
    I --> K[PTQ INT8]
    
    J --> L[16% accuracy]
    K --> M[36% accuracy]
    
    L --> N[Déploiement STM32F767ZI]
    M --> N


graph TD
    A[Capteur LoRa MKR WAN 1310] --> B[Passerelle TTN]
    B --> C[Webhook Flask personnalisé]
    C --> D[Base de données SQL]
    C --> E[CSV local]
    D --> F[App Android via API]
    
