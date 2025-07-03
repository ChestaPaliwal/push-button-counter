# 🚀 CodTech Internship Task-1: Push Button Counter

## 📌 Project Overview
This project is a simple **Push Button Counter** using Arduino Uno. Each press of the button increases the counter by 1 and displays it on the Serial Monitor or 16x2 LCD.

## 🧰 Components Used
- Arduino UNO
- Push Button
- 10kΩ Resistor (pull-down)
- 16x2 LCD (optional)
- Breadboard and jumper wires
- Potentiometer (for LCD contrast)

## 🔌 Circuit Description
- Push button connected to digital pin 2 with a pull-down resistor to GND.
- LCD connected to digital pins (RS → 12, E → 11, D4–D7 → 5, 4, 3, 2).
- 5V and GND for power.

## 💻 Code
Code is included in this repo as `Push_Button_Counter.ino`.

You can choose either:
- **Serial Monitor** version, or
- **LCD Display** version

## 🔎 Output
Each button press increases the count and displays:
- On Serial Monitor: `Button Pressed Count: 1`, `2`, `3`, ...
- On LCD: Line 1 → "Button Count:", Line 2 → Number

## 📸 Circuit Diagram
> *(Add the image you generated or draw and upload a clean circuit diagram here)*

---

## 📤 How to Run
1. Upload code to Arduino Uno using Arduino IDE.
2. Open Serial Monitor (or view LCD output).
3. Press the button and see the count increase.

---

✅ Submitted for: **CodTech Internship Task-1**

🧑‍💻 Developed by: *[chesta Paliwal]*
# push-button-counter
"CodTech Internship Task 1 - Push Button Counter using Arduino"
