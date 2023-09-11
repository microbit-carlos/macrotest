#include "pxt.h"

using namespace pxt;

#define MACROTOSTR(x) #x
#define MACROTOSTRING(x) MACROTOSTR(x)

namespace macrotest {
    //%
    void print_macros() {
        uBit.serial.send("MICROBIT_BLE_UTILITY_SERVICE_PAIRING     = " MACROTOSTRING(MICROBIT_BLE_UTILITY_SERVICE_PAIRING) "\n");
        uBit.serial.send("MICROBIT_BLE_UTILITY_SERVICE             = " MACROTOSTRING(MICROBIT_BLE_UTILITY_SERVICE) "\n");
        uBit.serial.send("RANDOM_MACRO_IN_YOTTA_CONFIG_CODAL       = " MACROTOSTRING(RANDOM_MACRO_IN_YOTTA_CONFIG_CODAL) "\n");
        uBit.serial.send("RANDOM_MACRO_IN_YOTTA_CONFIG_MICROBITDAL = " MACROTOSTRING(RANDOM_MACRO_IN_YOTTA_CONFIG_MICROBITDAL) "\n");
        uBit.serial.send("RANDOM_MACRO_IN_YOTTA_CONFIG             = " MACROTOSTRING(RANDOM_MACRO_IN_YOTTA_CONFIG) "\n");
        uBit.serial.send("\n");
    }
}
