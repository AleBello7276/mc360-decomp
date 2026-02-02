#include "CInput.h"

// they seam to not be necessary
C_4JInput C_4JInput::sInstance;
CInput C_4JInput::mCInp;


void C_4JInput::SetGameJoypadMaps(int32_t a, uint8_t b, uint32_t c) {
    mCInp.SetGameJoypadMaps(a, b, c);
}
