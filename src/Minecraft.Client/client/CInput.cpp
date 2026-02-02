#include "CInput.h"

void CInput::SetGameJoypadMaps(int32_t a, uint8_t b, uint32_t c) {
    mJoyPadMasks[a & 0xff][b] = c;  
}
