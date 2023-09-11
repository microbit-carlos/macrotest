#include "pxt.h"

using namespace pxt;

#define MACROTOSTR(x) #x
#define MACROTOSTRING(x) MACROTOSTR(x)

#define MACROTOSTR20(x,y) #x
#define MACROTOSTR21(x,y) #y
#define MACROTOSTRING20(x) MACROTOSTR20(x)
#define MACROTOSTRING21(x) MACROTOSTR21(x)

namespace macrotest {
    //%
    void print_macros() {
        uBit.serial.send("MICROBIT_BLE_UTILITY_SERVICE_PAIRING = " MACROTOSTRING(MICROBIT_BLE_UTILITY_SERVICE_PAIRING) "\n");
        uBit.serial.send("MICROBIT_BLE_UTILITY_SERVICE         = " MACROTOSTRING(MICROBIT_BLE_UTILITY_SERVICE) "\n");
        uBit.serial.send("\n");
    }
}
