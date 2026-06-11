# LoRa-Based Smart Water Pump Controller

## Overview

The LoRa-Based Smart Water Pump Controller is a low-cost long-range wireless solution designed for farmers to remotely control irrigation motors without requiring GSM, GPS, internet connectivity, or recurring subscription charges.

The system consists of two units:

* **Transmitter Unit** – Installed at the farmer's home.
* **Receiver Unit** – Installed near the water pump in the farm.

Using LoRa communication technology, the farmer can remotely turn the motor ON or OFF and receive confirmation feedback from the receiver.

The system was successfully tested up to **2.3 km** under proper line-of-sight conditions.

---

# Problem Statement

In many rural areas, agricultural water pumps are installed far away from the farmer's house.

When electricity becomes available, the farmer often has to travel to the farm just to start the motor. Similarly, when irrigation is completed, the farmer must again visit the farm to switch the motor OFF.

Commercial products are available in the market, but they typically:

* Cost around ₹7000 or more.
* Use GSM/GPS technology.
* Require a SIM card.
* Need monthly recharge plans.
* Increase long-term operating costs.

This makes such solutions expensive and less accessible for small-scale farmers.

---

# Proposed Solution

To address this problem, we developed a **low-cost wireless motor control system** costing approximately **₹2000** as a one-time installation.

The system uses:

* Arduino Uno
* LoRa SX1278 Communication Modules
* Relay Module
* 10 dBi High Gain Antennas

The farmer can control the motor directly from home using a handheld transmitter without any SIM card, internet connection, or monthly charges.

---

# System Architecture

## Transmitter Unit (Farmer's Home)

Components:

* Arduino Uno
* LoRa Module
* ON Push Button
* OFF Push Button
* Status LEDs
* 10 dBi Antenna

Functions:

* Sends ON/OFF commands.
* Receives acknowledgment messages.
* Displays motor status using LEDs.

---

## Receiver Unit (Farm)

Components:

* Arduino Uno
* LoRa Module
* Relay Module
* Water Pump / Motor
* 10 dBi Antenna

Functions:

* Receives commands from transmitter.
* Controls motor through relay.
* Sends feedback acknowledgment.

---

# Working Principle

## Motor ON Operation

1. Farmer presses ON button.
2. Transmitter sends "ON" command through LoRa.
3. Receiver receives the command.
4. Relay activates.
5. Water pump turns ON.
6. Receiver sends acknowledgment:

   * "MOTOR ON"
7. Green LED glows at transmitter.

---

## Motor OFF Operation

1. Farmer presses OFF button.
2. Transmitter sends "OFF" command through LoRa.
3. Receiver receives the command.
4. Relay deactivates.
5. Water pump turns OFF.
6. Receiver sends acknowledgment:

   * "MOTOR OFF"
7. Red LED glows at transmitter.

---

# Hardware Used

| Component          | Quantity |
| ------------------ | -------- |
| Arduino Uno        | 2        |
| LoRa SX1278 Module | 2        |
| 10 dBi Antenna     | 2        |
| Relay Module       | 1        |
| Water Pump / Motor | 1        |
| Push Buttons       | 2        |
| LEDs               | 2        |
| Power Supply       | 2        |

---

# Software Used

* Arduino IDE
* Embedded C
* SoftwareSerial Library

---

# Communication Details

| Parameter            | Value   |
| -------------------- | ------- |
| Technology           | LoRa    |
| Frequency            | 433 MHz |
| Communication Type   | Two-Way |
| Internet Required    | No      |
| SIM Required         | No      |
| Monthly Charges      | No      |
| Maximum Tested Range | 2.3 km  |

---

# Key Features

* Long-range wireless communication
* Low-cost implementation (~₹2000)
* No GSM module required
* No GPS module required
* No internet dependency
* No monthly recharge cost
* Two-way acknowledgment system
* Easy installation
* Suitable for rural agriculture

---

# Testing and Results

The system was tested in real outdoor conditions.

Testing Conditions:

* Proper line-of-sight maintained
* 10 dBi antennas used
* Commands transmitted using LoRa modules

Results:

* Reliable communication achieved up to 2.3 km
* Successful motor ON/OFF operation
* Acknowledgment received successfully
* Stable communication performance

---

# Advantages Over Existing Market Solutions

| Existing GSM Solution     | Proposed LoRa Solution    |
| ------------------------- | ------------------------- |
| Cost ~ ₹7000              | Cost ~ ₹2000              |
| Requires SIM              | No SIM                    |
| Monthly Recharge Required | No Recharge               |
| Internet Dependency       | No Internet               |
| Higher Operating Cost     | One-Time Cost             |
| GSM Network Dependent     | Independent Communication |

---

# Applications

* Agricultural irrigation systems
* Remote motor control
* Smart farming
* Water pump automation
* Rural automation projects
* Embedded systems projects

---

# Future Improvements

* Water level monitoring
* Dry run protection
* Solar-powered operation
* Mobile application integration
* Multi-pump control
* LoRaWAN connectivity
* Cloud monitoring dashboard

---

# Authors

### Yuvesh Menghare

Electronics Engineering Undergraduate
Walchand College of Engineering, Sangli

### Shreyas Kamble

Electronics Engineering Undergraduate
Walchand College of Engineering, Sangli

---

# License

This project is developed for educational and research purposes.
