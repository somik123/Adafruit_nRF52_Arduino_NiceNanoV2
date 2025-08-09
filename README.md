# Adafruit_nRF52_Arduino_NiceNanoV2
Adafruit addon for SuperMini nRF52840 / Nice! Nano v2 nRF52840


## Pinouts

![SuperMini nRF52840 and nice!Nano v2 pinout](https://raw.githubusercontent.com/somik123/Adafruit_nRF52_Arduino_NiceNanoV2/refs/heads/main/img/nicenano-v2-pinout.png)

## Installation

1. Follow instructions on [Adafruit_nRF52_Arduino](https://github.com/adafruit/Adafruit_nRF52_Arduino) and install the latest nRF52840 board by Adafruit.
1. Open this directory on your windows PC (Replace `Somik` with your username)
    ```
    C:\Users\Somik\AppData\Local\Arduino15\packages\adafruit\hardware\nrf52\
     ```
1. Copy paste lines 21 to 23 from `installed.json` in the repo into the top of `"boards":` inside the `installed.json` file on your computer:
    ```
                {
                  "name": "Nice Nano v2 nRF52840"
                },
    ```
    > **Note:** The installed.json is taken from 1.7.0 and may need modifications if your version is greatly different.
1. Copy paste lines 9 to 71 from `boards.txt` into the top of the `boards.txt` file, usually right after `menu.debug_output=Debug Port`:
    ```
    # -----------------------------------
    # Nice! Nano v2 nRF52840
    # -----------------------------------
    nicenanov2n52840.name=Nice Nano v2 nRF52840
    ...
    ...
    ...
    nicenanov2n52840.menu.debug_output.rtt.build.logger_flags=-DCFG_LOGGER=2 -DCFG_TUSB_DEBUG=CFG_DEBUG -DSEGGER_RTT_MODE_DEFAULT=SEGGER_RTT_MODE_BLOCK_IF_FIFO_FULL
    ```
    > **Note:** The boards.txt is taken from 1.7.0 and may need modifications if your version is greatly different.

1. Open the latest version directory.
1. Open `variants` directory. Copy the `nice_nano_v2_nrf52840` directory inside `varients` into that directory.


# Pinout

| Label | Board Pin | Hardware Pin | Description         |
|-------|-----------|--------------|---------------------|
| D0    | 8         | P0.08        | D1, RX              |
| D1    | 6         | P0.06        | D0, TX              |
| D2    | 17        | P0.17        | D2, SDA             |
| D3    | 20        | P0.20        | D3, SCL             |
| D4    | 22        | P0.22        | D4, SCLK            |
| D5    | 24        | P0.24        | D5, MISO            |
| D6    | 32        | P1.00        | D6, MOSI            |
| D7    | 11        | P0.11        | D7                  |
| D8    | 36        | P1.04        | D8                  |
| D9    | 38        | P1.06        | D9                  |
| D10   | 9         | P0.09        | D10                 |
| D11   | 33        | P1.01        | D11                 |
| D12   | 34        | P1.02        | D12                 |
| D13   | 39        | P1.07        | D13                 |
| D14   | 43        | P1.11        | D14                 |
| D15   | 45        | P1.13        | D15                 |
| D16   | 10        | P0.10        | D16                 |
| LED_BUILTIN   | 15        | P0.15        | Internal LED        |
| D18   | 47        | P1.15        | D18                 |
| D19   | 2         | P0.02        | A0                  |
| D20   | 29        | P0.29        | A1                  |
| D21   | 31        | P0.31        | A2                  |
| EXT_VCC   | 13        | P0.13        | EXT_VCC (active high)|


# Schematics
![Nice! Nano v2 Schematics](https://raw.githubusercontent.com/somik123/Adafruit_nRF52_Arduino_NiceNanoV2/refs/heads/main/img/schematic_nice_nano_v2.png)

