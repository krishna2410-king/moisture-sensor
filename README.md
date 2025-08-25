## 🌱 Soil Moisture Sensor with Arduino Uno – README

### 📘 Overview
This project showcases how to use a **Soil Moisture Sensor** with an **Arduino Uno** to monitor the water content in soil. It's ideal for smart irrigation systems, automated plant care, and environmental monitoring.

### 🔍 Sensor Description
There are two main types of soil moisture sensors:
- **Resistive Sensor (e.g., FC-28)**: Measures conductivity between two probes.
- **Capacitive Sensor**: Measures changes in dielectric permittivity of the soil.

| Feature               | Resistive Sensor         | Capacitive Sensor        |
|----------------------|--------------------------|--------------------------|
| Accuracy             | Moderate                 | High                     |
| Durability           | Prone to corrosion       | Long-lasting             |
| Output               | Analog & Digital         | Analog only              |
| Voltage Range        | 3.3V–5V                  | 3.3V–5V                  |

### 🧠 Internal Structure
- **Resistive Sensor**:
  - Two exposed probes inserted into soil.
  - Measures resistance: wetter soil = lower resistance.
  - Output is analog voltage proportional to moisture.

- **Capacitive Sensor**:
  - Uses a capacitor-like structure.
  - Measures changes in soil’s dielectric constant.
  - More stable and corrosion-resistant.

### 🔌 Circuit Connections with Arduino Uno

#### 🛠️ Components Required
- Arduino Uno
- Soil Moisture Sensor (Resistive or Capacitive)
- Jumper wires
- Breadboard
- Optional: LEDs for visual feedback

#### ⚡ Wiring Diagram (Resistive Sensor – FC-28)

| Sensor Pin | Function       | Arduino Uno |
|------------|----------------|-------------|
| VCC        | Power          | 5V          |
| GND        | Ground         | GND         |
| A0         | Analog Output  | A0          |
| D0         | Digital Output | D2 (optional) |

> 💡 Tip: Use only the **analog output (A0)** for more precise readings.

> 🧪 Typical analog values:
> - **0–300**: Dry soil
> - **300–700**: Moist soil
> - **700–1023**: Wet soil

### 📦 Applications
- Smart irrigation systems
- Automated plant watering
- Agricultural monitoring
- Environmental sensing
