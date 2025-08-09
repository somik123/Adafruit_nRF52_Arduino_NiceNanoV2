# Adafruit_nRF52_Arduino_NiceNanoV2
Adafruit addon for SuperMini nRF52840 / Nice! Nano v2 nRF52840


## Pinouts

![SuperMini nRF52840 and nice!Nano v2 pinout](https://raw.githubusercontent.com/somik123/Adafruit_nRF52_Arduino_NiceNanoV2/refs/heads/main/supermini_nicenano.png)

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


## Credits:
 - The variant board is based on pinouts created by [pdcook](https://github.com/pdcook/nRFMicro-Arduino-Core). 
    > **Note:** The pinout image is also from his github.
  - The varient creation instructions taken from [Legohead259](https://gist.github.com/Legohead259/ea2a321e8b838fdade94bf81ef652a3e)
  