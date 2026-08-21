# CH32L103

<!-- This file is generated from ch32-riscv-ug/ch32-device-data (tables/ + tools/build_readme.py). Edit there, not here. -->

## Series

| Series | Core | ISA | Flash | SRAM | Clock | VDD | Packages | Products | Official |
|---|---|---|---|---|---|---|---|---|---|
| **CH32L103** | QingKe V4C | RV32IMAC | 64K | 20K | 96 MHz | 1.8-3.6V | LQFP48,QFN20,QFN32,QSOP28,TSSOP20 | 6 | [en](https://www.wch-ic.com/products/CH32L103.html) / [zh](https://www.wch.cn/products/CH32L103.html) |
| **CH32M103** | QingKe V4C | RV32IMAC | 64K | 20K | 96 MHz | 1.8-3.6V | QSOP28 | 1 | [en](https://www.wch-ic.com/products/CH32M103.html) / [zh](https://www.wch.cn/products/CH32M103.html) |

## Debug / serial defaults

| Series | SWDIO | SWCLK | UART TX | UART RX |
|---|---|---|---|---|
| CH32L103 | - | - | PA9 | PA10 |
| CH32M103 | - | - | - | - |

## Documents

| Document | Kind | English | 中文 |
|---|---|---|---|
| CH32L103DS0.PDF | datasheet | [page](https://www.wch-ic.com/downloads/CH32L103DS0_PDF.html) [mirror](https://ch32-riscv-ug.github.io/CH32L103/datasheet_en/CH32L103DS0.PDF) v2.1 | [page](https://www.wch.cn/downloads/CH32L103DS0_PDF.html) [mirror](https://ch32-riscv-ug.github.io/CH32L103/datasheet_zh/CH32L103DS0.PDF) v2.1 |
| CH32L103RM.PDF | reference-manual | [page](https://www.wch-ic.com/downloads/CH32L103RM_PDF.html) [mirror](https://ch32-riscv-ug.github.io/CH32L103/datasheet_en/CH32L103RM.PDF) v2.2 | [page](https://www.wch.cn/downloads/CH32L103RM_PDF.html) [mirror](https://ch32-riscv-ug.github.io/CH32L103/datasheet_zh/CH32L103RM.PDF) v2.2 |
| CH32L103EVT.ZIP | evt | - | [page](https://www.wch.cn/downloads/CH32L103EVT_ZIP.html) [mirror](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT) v1.9 |

## Pinouts

Pinout drawings are in the datasheet (chapter *Pinouts*):

| Package | Products | Datasheet | Outline |
|---|---|---|---|
| LQFP48 | CH32L103C8T6 | [en](https://ch32-riscv-ug.github.io/CH32L103/datasheet_en/CH32L103DS0.PDF) / [zh](https://ch32-riscv-ug.github.io/CH32L103/datasheet_zh/CH32L103DS0.PDF) | [drawing](https://raw.githubusercontent.com/ch32-riscv-ug/WCH-common/main/image/package_LQFP48.png) |
| TSSOP20 | CH32L103F8P6 | [en](https://ch32-riscv-ug.github.io/CH32L103/datasheet_en/CH32L103DS0.PDF) / [zh](https://ch32-riscv-ug.github.io/CH32L103/datasheet_zh/CH32L103DS0.PDF) | [drawing](https://raw.githubusercontent.com/ch32-riscv-ug/WCH-common/main/image/package_TSSOP20.png) |
| QFN20 | CH32L103F8U6 | [en](https://ch32-riscv-ug.github.io/CH32L103/datasheet_en/CH32L103DS0.PDF) / [zh](https://ch32-riscv-ug.github.io/CH32L103/datasheet_zh/CH32L103DS0.PDF) | [drawing](https://raw.githubusercontent.com/ch32-riscv-ug/WCH-common/main/image/package_QFN20.png) |
| QSOP28 | CH32L103G8R6 | [en](https://ch32-riscv-ug.github.io/CH32L103/datasheet_en/CH32L103DS0.PDF) / [zh](https://ch32-riscv-ug.github.io/CH32L103/datasheet_zh/CH32L103DS0.PDF) | [drawing](https://raw.githubusercontent.com/ch32-riscv-ug/WCH-common/main/image/package_QSOP28.png) |
| QFN32 | CH32L103K8U6, CH32L103K8U7 | [en](https://ch32-riscv-ug.github.io/CH32L103/datasheet_en/CH32L103DS0.PDF) / [zh](https://ch32-riscv-ug.github.io/CH32L103/datasheet_zh/CH32L103DS0.PDF) | [drawing](https://raw.githubusercontent.com/ch32-riscv-ug/WCH-common/main/image/package_QFN32.png) |
| QSOP28 | CH32M103G8R6 | [en](https://ch32-riscv-ug.github.io/CH32L103/datasheet_en/CH32L103DS0.PDF) / [zh](https://ch32-riscv-ug.github.io/CH32L103/datasheet_zh/CH32L103DS0.PDF) | [drawing](https://raw.githubusercontent.com/ch32-riscv-ug/WCH-common/main/image/package_QSOP28.png) |

## Product comparison

### CH32L103 product comparison

| | CH32L103&#8203;C8T6&#8203;(LQFP48) | CH32L103&#8203;F8P6&#8203;(TSSOP20) | CH32L103&#8203;F8U6&#8203;(QFN20) | CH32L103&#8203;G8R6&#8203;(QSOP28) | CH32L103&#8203;K8U6&#8203;(QFN32) | CH32L103&#8203;K8U7&#8203;(QFN32) |
|---|---|---|---|---|---|---|
| **Flash** | 64K | 64K | 64K | 64K | 64K | 64K |
| **SRAM** | 20K | 20K | 20K | 20K | 20K | 20K |
| **GPIO** | 37 | 16 | 19 | 26 | 31 | 31 |
| **Temperature** | -40..85C | -40..85C | -40..85C | -40..85C | -40..85C | -40..105C |
| ADC | 10+3 | 9+3 | 10+3 | 10+3 | 10+3 | 10+3 |
| CMP | 3 | CMP1CMP2 | 3 | 3 | 3 | 3 |
| 通信接口 | 4 | 4 | 4 | 4 | 4 | 4 |
| CPU主频 | Max：96MHz | - | - | - | - | - |
| 主要应用及特点 | General purpose, pin-compatible | General purpose, pin-compatible | General purpose, pin-optimized | General purpose, motor main control | General purpose, pin-optimized | General purpose, pin-optimized |
| OPA | 1 | 1 | 1 | 1 | 1 | 1 |
| 额定电压 | 3.3V | - | - | - | - | - |
| RTC | √ | - | - | - | - | - |
| Timer | 1 | 1 | 1 | 1 | 1 | 1 |
| Tkey | 10 | 9 | 10 | 10 | 10 | 10 |

## Pin definitions

### CH32L103 pin map

Pin functions (filterable): [ALL](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32L103) [ADC](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32L103&features=ADC) [I2C](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32L103&features=I2C) [SPI](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32L103&features=SPI) [SYS](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32L103&features=SYS) [TIM](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32L103&features=TIM) [UART](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32L103&features=UART) [USB](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32L103&features=USB)

| Pin name | Type | [CH32L103&#8203;C8T6](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32L103C8T6)&#8203;(LQFP48) | [CH32L103&#8203;F8P6](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32L103F8P6)&#8203;(TSSOP20) | [CH32L103&#8203;F8U6](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32L103F8U6)&#8203;(QFN20) | [CH32L103&#8203;G8R6](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32L103G8R6)&#8203;(QSOP28) | [CH32L103&#8203;K8U6](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32L103K8U6)&#8203;(QFN32) | [CH32L103&#8203;K8U7](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32L103K8U7)&#8203;(QFN32) | Notes |
|---|---|---|---|---|---|---|---|---|
| PA1 | I/O/A | 11 | 7 | 2 | 10 | 7 | 7 |  |
| PA2 | I/O/A | 12 | 8 | 3 | 11 | 8 | 8 |  |
| PA3 | I/O/A | 13 | 9 | 4 | 12 | 9 | 9 |  |
| PA4 | I/O/A | 14 | 10 | 5 | 13 | 10 | 10 |  |
| PA5 | I/O/A | 15 | 11 | 6 | 14 | 11 | 11 |  |
| PA6 | I/O/A | 16 | 12 | 20 | 15 | 12 | 12 |  |
| PA7 | I/O/A | 17 | 13 | 7 | 17 | 13 | 13 |  |
| PA8 | I/O | 29 | - | 14 | 24 | 18 | 18 |  |
| PA9 | I/O | 30 | - | 15 | 25 | 19 | 19 | UART TX |
| PA10 | I/O | 31 | - | 18 | 26 | 20 | 20 | UART RX |
| PA11 | I/O | 32 | 17 | 17 | 27 | 21 | 21 |  |
| PA12 | I/O | 33 | 18 | 16 | 28 | 22 | 22 |  |
| PA13 | I/O | 34 | 19 | 17 | - | 23 | 23 |  |
| PA14 | I/O | 37 | 20 | 16 | 1 | 24 | 24 |  |
| PA15 | I/O | 38 | - | - | - | 25 | 25 |  |
| PB0 | I/O/A | 18 | - | 8 | 16 | 14 | 14 |  |
| PB1 | I/O/A | 19 | 14 | 9 | 18 | 15 | 15 |  |
| PB2 | I/O/A | 20 | - | - | - | 16 | 16 |  |
| PB3 | I/O/A | 39 | - | - | 4 | 26 | 26 |  |
| PB4 | I/O/A | 40 | - | - | - | 27 | 27 |  |
| PB5 | I/O/A | 41 | - | - | 1 | 28 | 28 |  |
| PB6 | I/O/A | 42 | 19 | 11 | 2 | 29 | 29 |  |
| PB7 | I/O/A | 43 | 20 | 18 | 3 | 30 | 30 |  |
| PB8 | I/O/A | 45 | - | - | 5 | 32 | 32 |  |
| PB9 | I/O | 46 | - | - | - | 31 | 31 |  |
| PB10 | I/O/A | 21 | - | 9 | 18 | - | - |  |
| PB11 | I/O/A | 22 | - | 10 | 19 | - | - |  |
| PB12 | I/O | 25 | - | - | 20 | - | - |  |
| PB13 | I/O | 26 | - | 11 | 21 | - | - |  |
| PB14 | I/O/A | 27 | - | 12 | 22 | - | - |  |
| PB15 | I/O/A | 28 | - | 13 | 23 | 17 | 17 |  |
| BOOT0 | I | 44 | 1 | - | - | 31 | 31 |  |
| NRST | I | 7 | 4 | - | - | - | - |  |
| OSC_IN | I/O/A | 5 | 2 | - | 8 | 4 | 4 | OSC |
| OSC_OUT | I/O/A | 6 | 3 | - | - | 5 | 5 | OSC |
| PA0-WKUP | I/O/A | 10 | 6 | 1 | 9 | 6 | 6 |  |
| VBAT | P | 1 | - | - | - | - | - |  |
| VDD | P | 24/36/48 | 16 | 19 | 6 | 1 | 1 |  |
| VDDA | P | 9 | 5 | - | - | - | - |  |
| VSS | P | 23/35/47 | 15 | EP | 7 | EP | EP |  |
| VSSA | P | 8 | - | - | - | - | - |  |

<details><summary><b>CH32L103 alternate functions</b></summary>

| Pad | default | (no route stated) | remap-1 | remap-2 | remap-3 | remap-4 | remap-5 | remap-7 |
|---|---|---|---|---|---|---|---|---|
| PA1 | ADC_IN1, OPA_N4, TIM2_CH2, USART2_RTS | - | - | TIM1_CH1, TIM2_CH2, USART2_RTS | TIM1_CH1, USART2_RTS | - | TIM1_CH2N | - |
| PA2 | ADC_IN2, CMP1_P0, OPA_O2, TIM2_CH3, USART2_TX | - | TIM2_CH3 | USART1_CTS | - | TIM1_CH4, TIM2_CH2 | TIM2_CH2 | - |
| PA3 | ADC_IN3, OPA_O0, TIM2_CH4, USART2_RX | - | TIM2_CH4 | USART1_CK | TIM1_ETR | TIM2_CH1_ETR | TIM1_CH4 | - |
| PA4 | ADC_IN4, OPA_O3, SPI1_NSS, USART2_CK | - | - | USART1_TX, USART2_CK | USART1_RX, USART2_CK | - | - | TIM2_CH4 |
| PA5 | ADC_IN5, OPA_N3, SPI1_SCK | - | USART4_TX | USART1_RX | USART1_TX | - | - | TIM2_CH3 |
| PA6 | ADC_IN6, OPA_N1, OPA_P5, SPI1_MISO, TIM3_CH1 | - | TIM1_BKIN, USART4_CK | - | USART1_CK | TIM2_CH4, USART1_CK | TIM2_CH4 | - |
| PA7 | ADC_IN7, OPA_N5, OPA_P3, SPI1_MOSI, TIM3_CH2 | - | TIM1_CH1N, USART4_CTS | TIM1_CH2 | TIM1_CH2 | - | - | - |
| PA8 | MCO, TIM1_CH1, USART1_CK | - | TIM1_CH1, USART1_CK | - | - | - | - | - |
| PA9 | TIM1_CH2, USART1_TX | - | TIM1_CH2 | - | - | - | - | - |
| PA10 | TIM1_CH3, USART1_RX | - | TIM1_CH3 | - | - | - | - | - |
| PA11 | CAN1_RX, TIM1_CH4, USART1_CTS, USBDM | - | TIM1_CH4, USART1_CTS | USART2_TX | USART2_RX | - | - | - |
| PA12 | CAN1_TX, TIM1_ETR, USART1_RTS, USBDP | - | TIM1_ETR, USART1_RTS | I2C1_SDA, SPI1_NSS, USART2_RX | USART2_TX | TIM1_BKIN | TIM1_BKIN, TIM2_CH1_ETR, USART1_RX | TIM2_CH1_ETR |
| PA13 | - | - | - | I2C1_SCL, TIM1_BKIN, USART1_RTS | TIM1_BKIN | USART1_RTS | TIM1_ETR | - |
| PA14 | - | - | - | TIM1_CH3 | TIM1_CH3 | TIM1_CH1N, USART1_CTS | TIM1_CH1N | - |
| PA15 | - | - | SPI1_NSS, TIM2_CH1_ETR, USART4_RTS | - | TIM2_CH1_ETR | - | - | - |
| PB0 | ADC_IN8, CMP1_OUT0, OPA_O4, OPA_P1, TIM3_CH3, USART4_TX | - | TIM1_CH2N, TIM3_CH3 | TIM1_CH2N | TIM1_CH2N | - | - | - |
| PB1 | ADC_IN9, CMP1_N0, OPA_O1, TIM3_CH4, USART4_RX | - | TIM1_CH3N, TIM3_CH4 | TIM1_CH4 | TIM1_CH4 | TIM1_CH2N | TIM1_CH1 | - |
| PB2 | CMP1_P1, USART4_CK | - | LPT_OUT | - | - | - | - | - |
| PB3 | CMP1_N1, CMP2_N0, CMP3_N0, USART4_CTS | - | SPI1_SCK, TIM2_CH2 | - | TIM2_CH2 | - | - | - |
| PB4 | CMP3_OUT0, USART4_RTS | - | SPI1_MISO, TIM3_CH1 | - | - | - | - | - |
| PB5 | CMP2_OUT0, CMP3_P0, I2C1_SMBA | - | LPTIM_CH1, SPI1_MOSI, TIM3_CH2, USART4_RX | I2C1_SMBA | I2C1_SMBA | - | - | - |
| PB6 | CC1, CMP2_P1, I2C1_SCL, TIM4_CH1 | - | LPTIM_ETR, USART1_TX | SPI1_SCK, TIM1_ETR | SPI1_SCK | TIM1_ETR | TIM1_CH3, USART1_CK | - |
| PB7 | CC2, CMP2_N1, I2C1_SDA, TIM4_CH2 | - | LPTIM_CH2, USART1_RX | SPI1_MOSI | SPI1_MOSI, USART1_CTS | TIM1_CH1 | TIM1_CH3N, USART1_CTS | - |
| PB8 | CMP2_P0, TIM4_CH3 | - | TIM4_CH3 | CAN1_RX, SPI1_MISO | SPI1_MISO, USART1_RTS | TIM1_CH2 | TIM1_CH2, USART1_RTS | TIM2_CH2 |
| PB9 | TIM4_CH4 | - | TIM4_CH4 | CAN1_TX, TIM1_CH3N | I2C1_SCL, TIM1_CH3N | TIM1_CH3N, USART1_RX | - | - |
| PB10 | CMP1_OUT1, CMP3_P1, I2C2_SCL, OPA_N2, OPA_N6, USART3_TX | - | TIM4_CH1 | TIM2_CH3 | TIM2_CH3 | - | - | - |
| PB11 | CMP2_OUT1, CMP3_N1, I2C2_SDA, OPA_N0, USART3_RX | - | TIM4_CH2 | TIM1_CH1N, TIM2_CH4 | I2C1_SDA, TIM1_CH1N, TIM2_CH4 | USART1_TX | - | - |
| PB12 | CMP3_OUT1, I2C2_SMBA, LPTIM_CH1, SPI2_NSS, TIM1_BKIN, USART3_CK | - | - | USART3_CK | SPI1_NSS, USART3_CK | TIM1_CH3, TIM2_CH3 | TIM2_CH3, USART1_TX | - |
| PB13 | LPTIM_CH2, SPI2_SCK, TIM1_CH1N, USART3_CTS | - | - | USART3_CTS | USART3_CTS | - | - | - |
| PB14 | LPTIM_ETR, OPA_P2, SPI2_MISO, TIM1_CH2N, USART3_RTS | - | - | USART3_RTS | USART3_RTS | - | - | - |
| PB15 | LPTIM_OUT, OPA_P0, SPI2_MOSI, TIM1_CH3N | - | - | - | - | - | - | - |
| OSC_IN | - | PD0 | - | USART3_RX | CAN1_RX, USART3_TX | - | - | - |
| OSC_OUT | - | PD1 | - | USART3_TX | CAN1_TX, USART3_RX | - | - | - |
| PA0-WKUP | ADC_IN0, OPA_P4, TIM2_CH1_ETR, USART2_CTS, WKUP | - | - | TIM2_CH1_ETR, USART2_CTS | USART2_CTS | - | - | - |

</details>

### CH32M103 pin map

Pin functions (filterable): [ALL](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32M103) [ADC](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32M103&features=ADC) [I2C](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32M103&features=I2C) [SPI](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32M103&features=SPI) [SYS](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32M103&features=SYS) [TIM](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32M103&features=TIM) [UART](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32M103&features=UART) [USB](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32M103&features=USB)

| Pin name | Type | [CH32M103&#8203;G8R6](https://ch32-riscv-ug.github.io/ch32-device-data/pins.html?chip=CH32M103G8R6)&#8203;(QSOP28) | Notes |
|---|---|---|---|
| PA1 | I/O/A | 28 |  |
| PA2 | I/O/A | 1 |  |
| PA3 | I/O/A | 2 |  |
| PA4 | I/O/A | 3 |  |
| PA5 | I/O/A | 4 |  |
| PA6 | I/O/A | 5 |  |
| PA7 | I/O/A | 6 |  |
| PA11 | I/O | 21 |  |
| PA12 | I/O | 22 |  |
| PB0 | I/O/A | 7 |  |
| PB1 | I/O/A | 8 |  |
| PB3 | I/O/A | 23 |  |
| PB6 | I/O/A | 24 |  |
| PB7 | I/O/A | 25 |  |
| PB8 | I/O/A | 26 |  |
| PB10 | I/O/A | 9 |  |
| PB11 | I/O/A | 10 |  |
| PA0-WKUP | I/O/A | 27 |  |
| VDD | P | 11 |  |
| VHREG | P | 13 |  |
| VHV | P | 14 |  |
| VSS | P | 12 |  |

<details><summary><b>CH32M103 alternate functions</b></summary>

| Pad | default | remap-1 | remap-2 | remap-3 | remap-4 | remap-5 | remap-7 |
|---|---|---|---|---|---|---|---|
| PA1 | ADC_IN1, OPA_N4, TIM2_CH2, USART2_RTS | - | TIM1_CH1, TIM2_CH2, USART2_RTS | TIM1_CH1, USART2_RTS | - | TIM1_CH2N | - |
| PA2 | ADC_IN2, CMP1_P0, OPA_O2, TIM2_CH3, USART2_TX | TIM2_CH3 | USART1_CTS | - | TIM1_CH4, TIM2_CH2 | TIM2_CH2 | - |
| PA3 | ADC_IN3, OPA_O0, TIM2_CH4, USART2_RX | TIM2_CH4 | USART1_CK | TIM1_ETR | TIM2_CH1_ETR | TIM1_CH4 | - |
| PA4 | ADC_IN4, OPA_O3, SPI1_NSS, USART2_CK | - | USART1_TX, USART2_CK | USART1_RX, USART2_CK | - | - | TIM2_CH4 |
| PA5 | ADC_IN5, OPA_N3, SPI1_SCK | USART4_TX | USART1_RX | USART1_TX | - | - | TIM2_CH3 |
| PA6 | ADC_IN6, OPA_N1, OPA_P5, SPI1_MISO, TIM3_CH1 | TIM1_BKIN, USART4_CK | - | USART1_CK | TIM2_CH4, USART1_CK | TIM2_CH4 | - |
| PA7 | ADC_IN7, OPA_N5, OPA_P3, SPI1_MOSI, TIM3_CH2 | TIM1_CH1N, USART4_CTS | TIM1_CH2 | TIM1_CH2 | - | - | - |
| PA11 | CAN1_RX, TIM1_CH4, USART1_CTS, USBDM | TIM1_CH4, USART1_CTS | USART2_TX | USART2_RX | - | - | - |
| PA12 | CAN1_TX, TIM1_ETR, USART1_RTS, USBDP | TIM1_ETR, USART1_RTS | I2C1_SDA, SPI1_NSS, USART2_RX | USART2_TX | TIM1_BKIN | TIM1_BKIN, TIM2_CH1_ETR, USART1_RX | TIM2_CH1_ETR |
| PB0 | ADC_IN8, CMP1_OUT0, OPA_O4, OPA_P1, TIM3_CH3, USART4_TX | TIM1_CH2N, TIM3_CH3 | TIM1_CH2N | TIM1_CH2N | - | - | - |
| PB1 | ADC_IN9, CMP1_N0, OPA_O1, TIM3_CH4, USART4_RX | TIM1_CH3N, TIM3_CH4 | TIM1_CH4 | TIM1_CH4 | TIM1_CH2N | TIM1_CH1 | - |
| PB3 | CMP1_N1, CMP2_N0, CMP3_N0, USART4_CTS | SPI1_SCK, TIM2_CH2 | - | TIM2_CH2 | - | - | - |
| PB6 | CC1, CMP2_P1, I2C1_SCL, TIM4_CH1 | LPTIM_ETR, USART1_TX | SPI1_SCK, TIM1_ETR | SPI1_SCK | TIM1_ETR | TIM1_CH3, USART1_CK | - |
| PB7 | CC2, CMP2_N1, I2C1_SDA, TIM4_CH2 | LPTIM_CH2, USART1_RX | SPI1_MOSI | USART1_CTS | - | USART1_CTS | - |
| PB8 | CMP2_P0, TIM4_CH3 | TIM4_CH3 | CAN1_RX, SPI1_MISO | SPI1_MISO, USART1_RTS | TIM1_CH2 | TIM1_CH2, USART1_RTS | TIM2_CH2 |
| PB10 | CMP1_OUT1, CMP3_P1, I2C2_SCL, OPA_N2, OPA_N6, USART3_TX | TIM4_CH1 | TIM2_CH3 | TIM2_CH3 | - | - | - |
| PB11 | CMP2_OUT1, CMP3_N1, I2C2_SDA, OPA_N0, USART3_RX | TIM4_CH2 | TIM1_CH1N, TIM2_CH4 | I2C1_SDA, TIM1_CH1N, TIM2_CH4 | USART1_TX | - | - |
| PA0-WKUP | ADC_IN0, OPA_P4, TIM2_CH1_ETR, USART2_CTS, WKUP | - | TIM2_CH1_ETR, USART2_CTS | USART2_CTS | - | - | - |

</details>

<details><summary><b>Remap selectors (AFIO)</b></summary>

| Series | Field | Register | Bits | Values | Reset |
|---|---|---|---|---|---|
| CH32L103 | CAN_RM | PCFR1 | PCFR1:13;PCFR1:14 | 0;2;3 |  |
| CH32L103 | I2C1_RM | PCFR1\|PCFR2 | PCFR1:1;PCFR2:23 | 0;2;3 | 0 |
| CH32L103 | LPTIM_RM | PCFR2 | PCFR2:25 | 0;1 | 0 |
| CH32L103 | SPI1_RM | PCFR1\|PCFR2 | PCFR1:0;PCFR2:24 | 0;1;2;3 | 0 |
| CH32L103 | TIM1_RM | PCFR1\|PCFR2 | PCFR1:6;PCFR1:7;PCFR2:22 | 0;1;2;3;4;5;7 | 0 |
| CH32L103 | TIM2_RM | PCFR1\|PCFR2 | PCFR1:8;PCFR1:9;PCFR2:21 | 0;1;2;3;4;5;7 | 0 |
| CH32L103 | TIM3_RM | PCFR1 | PCFR1:10 | 0;1 | 0 |
| CH32L103 | TIM4_RM | PCFR1 | PCFR1:12 | 0;1 | 0 |
| CH32L103 | USART1_RM | PCFR1\|PCFR2 | PCFR1:2;PCFR2:19;PCFR2:20 | 0;1;2;3;4;5 | 0 |
| CH32L103 | USART2_RM | PCFR1\|PCFR2 | PCFR1:3;PCFR2:18 | 0;1;2;3 | 0 |
| CH32L103 | USART3_RM | PCFR1 | PCFR1:4;PCFR1:5 | 0;2;3 |  |
| CH32L103 | USART4_RM | PCFR2 | PCFR2:16 | 0;1 | 0 |
| CH32M103 | CAN_RM | PCFR1 | PCFR1:13;PCFR1:14 | 0;2 |  |
| CH32M103 | I2C1_RM | PCFR1\|PCFR2 | PCFR1:1;PCFR2:23 | 0;2;3 | 0 |
| CH32M103 | LPTIM_RM | PCFR2 | PCFR2:25 | 0;1 | 0 |
| CH32M103 | SPI1_RM | PCFR1\|PCFR2 | PCFR1:0;PCFR2:24 | 0;1;2;3 | 0 |
| CH32M103 | TIM1_RM | PCFR1\|PCFR2 | PCFR1:6;PCFR1:7;PCFR2:22 | 0;1;2;3;4;5;7 | 0 |
| CH32M103 | TIM2_RM | PCFR1\|PCFR2 | PCFR1:8;PCFR1:9;PCFR2:21 | 0;1;2;3;4;5;7 | 0 |
| CH32M103 | TIM3_RM | PCFR1 | PCFR1:10 | 0;1 | 0 |
| CH32M103 | TIM4_RM | PCFR1 | PCFR1:12 | 0;1 | 0 |
| CH32M103 | USART1_RM | PCFR1\|PCFR2 | PCFR1:2;PCFR2:19;PCFR2:20 | 0;1;2;3;4;5 | 0 |
| CH32M103 | USART2_RM | PCFR1\|PCFR2 | PCFR1:3;PCFR2:18 | 0;1;2;3 | 0 |
| CH32M103 | USART3_RM | PCFR1 | PCFR1:4;PCFR1:5 | 0;2;3 |  |
| CH32M103 | USART4_RM | PCFR2 | PCFR2:16 | 0;1 | 0 |

</details>

## Block diagrams

### CH32L103
<img src="image/architecture_CH32L103.png" alt="CH32L103 block diagram" />

### CH32M103
<img src="image/architecture_CH32M103.png" alt="CH32M103 block diagram" />

## Errata

- CH32L103K8U and CH32L103F8U6 have a built-in 5.1kΩ pull-down resistor that is forced on in standby mode; standby current increases by about 5uA and the pull-down configuration note in the datasheet is not needed. *(applies: CH32L103; 5th-to-last digit of lot number = 1 (CH32L103K8U/F8U6))*

## EVT examples

111 routines in [EVT/EXAM](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM):

[ADC](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/ADC) 8 · [APPLICATION](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/APPLICATION) 2 · [CAN](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/CAN) 5 · [DMA](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/DMA) 2 · [I2C](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/I2C) 6 · [IAP](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/IAP) 1 · [INT](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/INT) 2 · [LPTIM](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/LPTIM) 2 · [OPA](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/OPA) 9 · [PMP](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/PMP) 1 · [PWR](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/PWR) 8 · [RCC](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/RCC) 4 · [RunInRam_LP](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/RunInRam_LP) 4 · [SDI_Printf](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/SDI_Printf) 1 · [SPI](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/SPI) 6 · [TIM](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/TIM) 13 · [TOUCHKEY](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/TOUCHKEY) 6 · [USART](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/USART) 10 · [USB](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/USB) 17 · [USBPD](https://github.com/ch32-riscv-ug/CH32L103/tree/main/EVT/EXAM/USBPD) 4

---
Data: [ch32-device-data](https://github.com/ch32-riscv-ug/ch32-device-data) (tables/ -- each value carries its evidence and confidence there).
