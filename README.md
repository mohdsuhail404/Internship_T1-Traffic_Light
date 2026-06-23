# Internship Task 1: Traffic Light Controller 🚦

A simple, beginner-friendly Arduino-based traffic light simulator created as part of an internship assignment. This project uses an Arduino UNO to control three LEDs (Red, Yellow, and Green) to mimic the basic timing sequence of a standard real-world traffic light.

## 🚀 Features

* **Realistic Sequence:** Cycles through Red, Yellow, and Green lights sequentially.
* **Custom Timing:** * 🔴 **Red Light:** 5 seconds
    * 🟡 **Yellow Light:** 3 seconds
    * 🟢 **Green Light:** 5 seconds
* **Clean Code:** Highly commented, modular, and easy-to-understand C++ code written for the Arduino framework.

---

## 🛠️ Hardware Requirements

To build this circuit, you will need:
* 1 x Arduino UNO (or compatible microcontroller)
* 1 x Red LED
* 1 x Yellow LED
* 1 x Green LED
* 3 x $220\Omega$ Resistors (to protect the LEDs)
* 1 x Breadboard
* Jumper wires

### Pin Configuration
| Component | Arduino Pin |
| :--- | :--- |
| **Red LED** | Pin 10 |
| **Yellow LED** | Pin 11 |
| **Green LED** | Pin 12 |

---

## 💻 Software & Setup

This project is structured using standard Arduino/PlatformIO conventions.

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/mohdsuhail404/Internship_T1-Traffic_Light.git](https://github.com/mohdsuhail404/Internship_T1-Traffic_Light.git)
   ```
2. Open the project in the **Arduino IDE** or **VS Code (with PlatformIO)**.
3. Connect your Arduino board to your computer via USB.
4. Select your correct Board and Port from the tools menu.
5. Upload the code found in `src/main.cpp`.

---

## 📝 Code Overview

The logic uses simple `digitalWrite()` functions paired with `delay()` intervals to keep the loop moving seamlessly:

```cpp
void loop() {
  digitalWrite(Led_red, HIGH);   // Turn Red on
  delay(5000);                  // Wait 5 seconds
  digitalWrite(Led_red, LOW);    // Turn Red off
  
  digitalWrite(Led_yellow, HIGH); // Turn Yellow on
  delay(3000);                   // Wait 3 seconds
  digitalWrite(Led_yellow, LOW);  // Turn Yellow off
  
  digitalWrite(Led_green, HIGH);  // Turn Green on
  delay(5000);                   // Wait 5 seconds
  digitalWrite(Led_green, LOW);   // Turn Green off
}
