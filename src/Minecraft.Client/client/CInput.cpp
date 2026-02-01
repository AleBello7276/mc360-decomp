#include "CInput.h"

// they seam to not be necessary
C_4JInput C_4JInput::sInstance;
CInput C_4JInput::mCInp;

__declspec(noinline) void CInput::SetGameJoypadMaps(int32_t a, uint8_t b, uint32_t c) {
    mJoyPadMasks[a & 0xff][b] = c;  
}

void C_4JInput::SetGameJoypadMaps(int32_t a, uint8_t b, uint32_t c) {
    sInstance.mCInp.SetGameJoypadMaps(a, b, c);
}

//void C_4JInput::SetGameJoypadMaps(int32_t a, uint8_t b, uint32_t c) {
//    CInput::getInstance().SetGameJoypadMaps(a, b, c);
//}
