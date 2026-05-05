# ⚡ Electronic Speed Controller (ESC)

Custom 3-phase sensorless BLDC ESC designed for high-performance RC applications.

---

## 🧩 Overview

This ESC is built around a **fully custom 6-layer PCB**, designed to handle high current loads while maintaining signal integrity for precise motor control.

It implements **sensorless commutation using BEMF detection**, enabling reliable operation without Hall sensors.

---

## 🔌 Hardware Design

### 🧠 Microcontroller

* **PIC18F4431**
  Dedicated motor control MCU with PWM modules optimized for 3-phase control.

---

### 🎛️ Motor Control & Feedback

* **X9C103 Digital Potentiometer**
  Used for tuning/control input

* **MCP6564 (Quad Comparator)**
  Used alongside voltage dividers for **Back-EMF (BEMF) zero-crossing detection**

---

### ⚡ Power Stage

* **SIR626DP-T1-RE3 MOSFETs**
  Low Rds(on) MOSFETs for high current handling

* **NCV51511 Gate Drivers**
  Bootstrap high/low-side drivers for efficient switching

---

### 🔋 Power Supply

* **TPMS82903 Buck Converter**
  Powers:

  * Logic circuitry
  * Receiver

---

## 🧱 PCB Design

* **6-layer PCB**
* Optimized for:

  * Power distribution
  * Noise reduction
  * Thermal performance

---

## 🖼️ PCB Layers

### Layer 1

![Layer 1](./All_layers/Layer1.png)

> Replace this with your explanation (power stage, routing, placement, etc.)

### Layer 2

![Layer 2](./All_layers/Layer2.png)

> Replace this with your explanation

### Layer 3

![Layer 3](./All_layers/Layer3.png)

> Replace this with your explanation

### Layer 4

![Layer 4](./All_layers/Layer4.png)

> Replace this with your explanation

### Layer 5

![Layer 5](./All_layers/Layer5.png)

> Replace this with your explanation

### Layer 6

![Layer 6](./All_layers/Layer6.png)

> Replace this with your explanation

---

## ⚙️ Firmware

The firmware is adapted from:
👉 https://github.com/k-omura

Modified to:

* Match this hardware design
* Implement sensorless BLDC control
* Optimize for RC vehicle response

---

## 🏎️ Target Motor

* **3660 BLDC Motor**
* **4200KV**
* **4 poles**
* **Max RPM:** ~50,000
* **Current spikes:** up to 100A

---

## 📌 Notes

* Designed for RC car applications
* Focus on performance and efficiency
* Continuously improved and tested
