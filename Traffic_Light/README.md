# Traffic Light Controller using Arduino UNO

## Aim
To design and simulate a 3-way Traffic Light system (Red, Yellow, Green) using Arduino UNO.

---

## Objects / Components Required

| S.No | Component Name | Proteus Library Keyword | Quantity | Purpose |
|:---:|:---|:---|:---:|:---|
| 1 | **Arduino UNO** | `ARDUINO UNO` or `SIMULINO UNO` | 1 | Microcontroller |
| 2 | **Red LED** | `LED-RED` | 1 | Stop indicator |
| 3 | **Yellow LED** | `LED-YELLOW` | 1 | Caution indicator |
| 4 | **Green LED** | `LED-GREEN` | 1 | Go indicator |
| 5 | **Resistors (220Ω)** | `RES` | 3 | Current limiting |
| 6 | **Ground** | `GROUND` | 1 | Ground reference |

---

## Circuit Connections

| LED | Resistor (220Ω) | Arduino UNO Pin | Cathode |
|:---|:---|:---|:---|
| **Red LED** | Anode $\rightarrow$ Resistor | **Pin 10** | **GND** |
| **Yellow LED** | Anode $\rightarrow$ Resistor | **Pin 9** | **GND** |
| **Green LED** | Anode $\rightarrow$ Resistor | **Pin 8** | **GND** |

---

## Proteus File
The Proteus project is directly available in this folder:
- **`traffic_light_arduino.pdsprj`** (Double-click to open directly in Proteus)

---

## Circuit Screenshot
Place your screenshot here as `circuit.png`:

![Circuit Diagram](circuit.png)

