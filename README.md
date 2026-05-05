# Transmitter (Controller)

Custom handheld controller for wireless control of the RC vehicle.  
  
I took down a worn down Xbox one controller, reused any parts that I could and remade my own PCB that fits inside the controller case so i can have a similar feel to the racing games I used to play and enojoy.

---

##  Overview

This transmitter is built around a **custom 4-layer PCB**, this being my firts PCB design ever I find it easier to start with a 4 layers, but if I am to go back to designing I would only make it in 2 layers, the complexity of the PCB itself is too low to justify the 4 layers.

The goal of this controller was to transmitt data over a radio module HC-12 which works at 433Mhz, and is capable of transmitting at distances as far away as 1km

---

## Hardware Design

### Microcontroller

* **PIC16F15276**
  Handles input processing and communication with the receiver. Cheap and easy to programm being a chip supported in the MCC from MpLab X IDE with a lot of configurable pins.

---

### User Input

* **Dual Joysticks**
  Provides steering control and menu configuration on the receiver

* **Hall Effect Sensors (from Xbox One controller)**
  Used for **high-precision, contactless throttle control**, improving reliability and eliminating mechanical wear.

---

## 📐 Schematic

![Schematic](./Schematic_T.jpeg)

> The schematic is fairly simple, at the center of it being the microcontroller, and all the analog pins needed that go to the joysticks and hall effect sensors as well as the uart communication for the HC-12 module.
---

## PCB Design

* **4-layer PCB**
* Designed for:

  * Compact handheld form factor

---

## PCB Layers

### Layer 1

![Layer 1](./All_layers/layer1.png)

> The first layer is primarily concerned with power distribution, ensuring all components across the board receive their required supply voltages.

### Layer 2

![Layer 2](./All_layers/layer2.png)

> This layer is dominated by the ground plane, while also accommodating the analog signal traces associated with the joystick inputs.

### Layer 3

![Layer 3](./All_layers/layer3.png)

> Similarly to the second layer, this layer is largely devoted to the ground plane, reinforcing the overall grounding strategy of the board.
### Layer 4

![Layer 4](./All_layers/layer4.png)

> The final layer is comparatively sparse, carrying only the traces dedicated to UART communication — keeping this relatively noise-sensitive interface clean and uncluttered

---

## Firmware

The firmware is responsible for:

* Reading joystick and sensor inputs
* Processing control signals
* Transmitting data wirelessly to the receiver with the help of the HC-12 module

---

## Functionality

* Real-time throttle and steering control
* Smooth input response using Hall effect sensing
* Reliable wireless communication
* Response time can be improved

---

## Notes

* Designed specifically for RC applications
* Focus on precision and responsiveness
* Built using salvaged components (Xbox controller sensors)
