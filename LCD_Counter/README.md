# Display a Counter on 16x2 LCD

## Aim
To interface a 16x2 LCD with Arduino UNO and display an incrementing digital counter using `lcd.print()`.

---

## Important Concept
- **Concept Used**: `lcd.print()` to output strings and numeric variable values to specific coordinates on the LCD with `lcd.setCursor(col, row)`.

---

## Objects / Components Required

| S.No | Component Name | Proteus Library Keyword | Quantity | Purpose |
|:---:|:---|:---|:---:|:---|
| 1 | **Arduino UNO** | `ARDUINO UNO` or `SIMULINO UNO` | 1 | Microcontroller board |
| 2 | **16x2 LCD Display** | `LM016L` | 1 | Alphanumeric LCD Display |
| 3 | **Power & Ground** | `POWER` (+5V) and `GROUND` | 1 each | VCC and GND |

---

## Circuit Connections

| LCD Pin Number | LCD Pin Name | Arduino UNO Pin |
|:---:|:---|:---|
| **Pin 1** | **VSS** | **GND** |
| **Pin 2** | **VDD** | **+5V (POWER)** |
| **Pin 3** | **VEE** | **GND** (or Potentiometer center) |
| **Pin 4** | **RS** | **Digital Pin 12** |
| **Pin 5** | **RW** | **GND** |
| **Pin 6** | **E** | **Digital Pin 11** |
| **Pin 11**| **D4** | **Digital Pin 5** |
| **Pin 12**| **D5** | **Digital Pin 4** |
| **Pin 13**| **D6** | **Digital Pin 3** |
| **Pin 14**| **D7** | **Digital Pin 2** |

---

## Circuit Schematic

```
               16x2 LCD (LM016L)
         +----------------------------+
         | VSS VDD VEE RS RW  E D4 D5 D6 D7
         +--+---+---+---+--+--+-+-+-+-+-+-+
            |   |   |   |  |  | | | | | |
            v   v   v   |  v  | | | | | |
           GND +5V GND  | GND | | | | | |
                        |     | | | | | |
  Arduino UNO:          |     | | | | | |
    Pin 12 -------------+     | | | | | |
    Pin 11 -------------------+ | | | | |
    Pin 5  ---------------------+ | | | |
    Pin 4  -----------------------+ | | |
    Pin 3  -------------------------+ | |
    Pin 2  ---------------------------+ |
```

---

## Step-by-Step Procedure

1. **In Arduino IDE**:
   - Paste code from [`LCD_Counter.ino`](LCD_Counter.ino).
   - Go to **Sketch $\rightarrow$ Export Compiled Binary** (`Ctrl+Alt+S`) to build `.hex`.
2. **In Proteus**:
   - Pick `LM016L` and `SIMULINO UNO` (or `ARDUINO UNO`).
   - Connect pins according to the connection table above.
   - Double-click Arduino $\rightarrow$ Load `.hex` file.
   - Click **Play**. The counter increments every second (`0, 1, 2, 3...`).

---

## Circuit Screenshot
Place your screenshot here as `circuit.png`:

![Circuit Diagram](circuit.png)

