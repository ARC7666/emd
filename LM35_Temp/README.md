# LM35 Temperature Sensor Interfacing with Arduino UNO

## Aim
To interface an LM35 temperature sensor with Arduino UNO and measure the surrounding temperature using the Serial Monitor.

---

## Objects / Components Required

| S.No | Component Name | Proteus Library Keyword | Quantity | Purpose |
|:---:|:---|:---|:---:|:---|
| 1 | **Arduino UNO** | `ARDUINO UNO` or `SIMULINO UNO` | 1 | Microcontroller board |
| 2 | **LM35 Sensor** | `LM35` | 1 | Precision Centigrade Temperature Sensor |
| 3 | **Virtual Terminal** | From *Instruments Toolbar* | 1 | Displays Serial Monitor output |
| 4 | **Power & Ground** | `POWER`, `GROUND` (Terminals Mode) | 1 each | VCC (+5V) and Ground |

---

## Circuit Connections

### 1. LM35 to Arduino UNO
| LM35 Pin (Flat Face Facing You) | Pin Function | Arduino UNO Pin |
|:---|:---|:---|
| **Pin 1 (Left)** | **VCC** | **5V** |
| **Pin 2 (Middle)** | **VOUT (Analog Output)** | **A0** |
| **Pin 3 (Right)** | **GND** | **GND** |

### 2. Virtual Terminal to Arduino UNO (for Proteus)
| Virtual Terminal Pin | Arduino UNO Pin |
|:---|:---|
| **RXD** | **TX (Digital Pin 1)** |
| **TXD** | **RX (Digital Pin 0)** |

---

## Circuit Schematic

```
               +5V (POWER)
                   |
             +-----+-----+
             |   LM35    |
             |           |
             | VCC OUT GND
             +--+---+---+
                |   |   |
                |   |   +--------> Arduino GND
                |   |
                |   +------------> Arduino Analog Pin A0
                |
                +----------------> Arduino 5V

Arduino UNO (Serial Pins):
  TX (Pin 1) --------------------> Virtual Terminal RXD
  RX (Pin 0) --------------------> Virtual Terminal TXD
```

---

## Proteus Simulation Steps

1. **Pick Components**:
   - Press **P** $\rightarrow$ Search `LM35` $\rightarrow$ Place it on schematic.
   - Search `SIMULINO UNO` (or `ARDUINO UNO`) $\rightarrow$ Place it.
   - Go to **Virtual Instruments Mode** (left toolbar) $\rightarrow$ pick **VIRTUAL TERMINAL**.
2. **Wire the Circuit**:
   - LM35 Pin 1 (VCC) $\rightarrow$ Arduino **5V** (or `POWER` terminal).
   - LM35 Pin 2 (VOUT) $\rightarrow$ Arduino **A0**.
   - LM35 Pin 3 (GND) $\rightarrow$ Arduino **GND** (or `GROUND` terminal).
   - Virtual Terminal **RXD** $\rightarrow$ Arduino **TX (Pin 1)**.
3. **Load Hex File**:
   - In Arduino IDE, click **Sketch $\rightarrow$ Export Compiled Binary** (`Ctrl+Alt+S`).
   - In Proteus, double-click Arduino $\rightarrow$ Browse and choose `.hex` file.
4. **Run Simulation**:
   - Click **Play**.
   - Use the **`+` / `-` buttons on the LM35** in Proteus to adjust temperature and see real-time updates on the Virtual Terminal.

---

## Circuit Screenshot
Place your Proteus circuit screenshot in this folder as `circuit.png`:

![Circuit Diagram](circuit.png)
*(Save screenshot here as `circuit.png` to view)*

