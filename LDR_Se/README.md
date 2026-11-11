# Question 01: LDR Sensor Interfacing with Arduino UNO

## Aim
To interface an LDR (Light Dependent Resistor) sensor module with Arduino UNO and detect bright and low-light conditions using the Serial Monitor.

---

## Objects / Components Required

| S.No | Component Name | Proteus Library Keyword | Quantity | Purpose |
|:---:|:---|:---|:---:|:---|
| 1 | **Arduino UNO** | `ARDUINO UNO` or `SIMULINO UNO` | 1 | Microcontroller board |
| 2 | **LDR Module** | `TORCH_LDR` or `LDR` + 10kΩ Resistor | 1 | Senses ambient light |
| 3 | **Virtual Terminal** | From *Instruments Toolbar* | 1 | Displays Serial outputs |
| 4 | **Power & Ground** | `POWER`, `GROUND` (Terminals Mode) | 1 each | VCC (5V) & Ground reference |

---

## Circuit Connections

### 1. LDR Module to Arduino UNO
| LDR Module Pin | Arduino UNO Pin | Description |
|:---|:---|:---|
| **VCC** | **5V** | Power supply (+5V) |
| **GND** | **GND** | Ground reference |
| **AO** (Analog Out) | **A0** | Analog input reading (0–1023) |

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
              +--------------+
              |              |
         +----+----+         |
         |   LDR   |         |
         | Module  |         |
         |         |         |
         | VCC GND AO        |
         +--+---+---+        |
            |   |   |        |
            |   |   +--------+-----> Arduino Analog Pin A0
            |   |            |
            |   +------------+-----> Arduino GND
            +----------------------> Arduino 5V

Arduino UNO (Serial Pins):
  TX (Pin 1) ----------------------> Virtual Terminal RXD
  RX (Pin 0) ----------------------> Virtual Terminal TXD
```

---

## Proteus Simulation Steps

1. **Pick Components**:
   - Press **P** in Proteus and search for `SIMULINO UNO` (or `ARDUINO UNO`).
   - If using module: search `TORCH_LDR` or make a voltage divider with `LDR` and a `10k RESISTOR`.
   - From left toolbar, click **Virtual Instruments Mode** $\rightarrow$ select **VIRTUAL TERMINAL**.
2. **Make Wire Connections**:
   - Connect LDR AO $\rightarrow$ Arduino **A0**.
   - Connect LDR VCC $\rightarrow$ **+5V**, GND $\rightarrow$ **GROUND**.
   - Connect Virtual Terminal **RXD** $\rightarrow$ Arduino **TX (Pin 1)**.
3. **Load Hex File**:
   - In Arduino IDE, go to **Sketch $\rightarrow$ Export Compiled Binary** (or press `Ctrl+Alt+S`).
   - In Proteus, double-click the Arduino board $\rightarrow$ under **Program File**, browse and select the `.hex` file.
4. **Run Simulation**:
   - Click the **Play** button at the bottom left.
   - The Virtual Terminal will pop up displaying the light values and condition (`Bright Light` or `Low Light`).

---

## Circuit Screenshot
Place your Proteus circuit screenshot in this folder as `circuit.png`:

![Circuit Diagram](circuit.png)
*(Save screenshot here as `circuit.png` to view)*

