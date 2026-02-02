#pragma once

#include <types.h>


// i don't understand why or even if it's correct
// either 4j liked to do this weird wrapping thing,
// or i straight up missed something, this should still match i think

class CInput {
public:
    void SetGameJoypadMaps(int32_t, uint8_t, uint32_t);

    char pad[0x1d0];
    uint32_t** mJoyPadMasks;
};


// wraps platform specific implementations ?!?! this is my guess
class C_4JInput {
public:
    static C_4JInput sInstance;    
    
    void SetGameJoypadMaps(int32_t a, uint8_t b, uint32_t c);
private:
    int something;
    int something2;
    static CInput mCInp;
};
