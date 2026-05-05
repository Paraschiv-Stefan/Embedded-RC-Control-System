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
  Used for tuning/control input (e.g., throttle or calibration adjustments)

* **MCP6564 (Quad Comparator)**
  Used alongside voltage dividers for **Back-EMF (BEMF) zero-crossing detection**, enabling sensorless commutation.

---

### ⚡ Power Stage

* **SIR626DP-T1-RE3 MOSFETs**
  Low Rds(on) MOSFETs capable of handling high current loads required by RC motors.

* **NCV51511 Gate Drivers**
  High/low-side drivers using bootstrap topology for driving the MOSFETs efficiently.

---

### 🔋 Power Supply

* **TPMS82903 Buck Converter**
  Steps down battery voltage to power:

  * Logic circuitry
  * Receiver module

---

## 🧱 PCB Design

* **6-layer stackup** for:

  * Improved power distribution
  * Reduced noise and EMI
  * Better thermal performance

---

## 🖼️ PCB Layers

### Top Layer

![Top Layer](./images/top.png)

> Replace this text with your explanation of routing, components, and design decisions.

### Inner Layer 1

![Inner Layer 1](./images/inner1.png)

> Replace this text with your explanation.

### Inner Layer 2

![Inner Layer 2](./images/inner2.png)

> Replace this text with your explanation.

### Inner Layer 3

![Inner Layer 3](./images/inner3.png)

> Replace this text with your explanation.

### Inner Layer 4

![Inner Layer 4](./images/inner4.png)

> Replace this text with your explanation.

### Bottom Layer

![Bottom Layer](./images/bottom.png)

> Replace this text with your explanation.

---

## ⚙️ Firmware

The firmware is based on and adapted from:
👉 https://github.com/k-omura

It has been modified to:

* Support this specific hardware design
* Implement reliable **sensorless BLDC control**
* Operate within RC constraints (fast throttle response, stability)

---

## 🏎️ Target Motor

* **Type:** 3660 Brushless Motor
* **KV Rating:** 4200KV
* **Poles:** 4
* **Max RPM:** ~50,000 RPM
* **Current:** Up to 100A spikes

---

## 📌 Notes

* Designed specifically for **RC car applications**
* Focus on **high efficiency + fast response**
* Still under continuous improvement and testing
