# Perform Addition using 4x4 Keypad

## Aim
To interface a 4x4 Matrix Keypad with Arduino UNO and perform addition of two numbers entered by the user, displaying results on the Serial Monitor / Virtual Terminal.

---

## Important Concept
- **Concept Used**: Keypad numeric input accumulation, state switching with operator `+`, and calculating the sum on `=` press.

---

## Objects / Components Required

| S.No | Component Name | Proteus Library Keyword | Quantity | Purpose |
|:---:|:---|:---|:---:|:---|
| 1 | **Arduino UNO** | `ARDUINO UNO` or `SIMULINO UNO` | 1 | Microcontroller board |
| 2 | **4x4 Keypad** | `KEYPAD-PHONE` | 1 | Numeric & operator entry |
| 3 | **Virtual Terminal** | From *Instruments Toolbar* | 1 | Serial output monitor |

---

## Circuit Connections

### 1. 4x4 Keypad to Arduino UNO
| Keypad Pin | Arduino UNO Pin |
|:---|:---|
| **Row 1 (R1)** | **Digital Pin 9** |
| **Row 2 (R2)** | **Digital Pin 8** |
| **Row 3 (R3)** | **Digital Pin 7** |
| **Row 4 (R4)** | **Digital Pin 6** |
| **Col 1 (C1)** | **Digital Pin 5** |
| **Col 2 (C2)** | **Digital Pin 4** |
| **Col 3 (C3)** | **Digital Pin 3** |
| **Col 4 (C4)** | **Digital Pin 2** |

### 2. Virtual Terminal to Arduino UNO
| Virtual Terminal Pin | Arduino UNO Pin |
|:---|:---|
| **RXD** | **TX (Digital Pin 1)** |
| **TXD** | **RX (Digital Pin 0)** |

---

## Step-by-Step Procedure

1. **In Arduino IDE**:
   - Open [`Keypad_Addition.ino`](Keypad_Addition.ino).
   - Export `.hex` via **Sketch $\rightarrow$ Export Compiled Binary**.
2. **In Proteus**:
   - Pick `KEYPAD-PHONE`, `SIMULINO UNO`, and `VIRTUAL TERMINAL`.
   - Wire Keypad rows to `9, 8, 7, 6` and columns to `5, 4, 3, 2`.
   - Wire Virtual Terminal RXD to Arduino TX (Pin 1).
   - Double-click Arduino $\rightarrow$ Load `.hex` file $\rightarrow$ Click **Play**.
3. **Usage**:
   - Enter first number (e.g., `25`).
   - Press **`A`** (`+`).
   - Enter second number (e.g., `15`).
   - Press **`#`** (`=`).
   - Virtual terminal shows: `25 + 15 = 40`.
   - Press **`*`** to clear at any time.

---

## Circuit Screenshot
Place your screenshot here as `circuit.png`:

![Circuit Diagram](circuit.png)

