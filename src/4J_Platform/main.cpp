#include "LIBCMT/string.h"
#include "client/CInput.h"
#include "d3d9/d3d9.h"
#include "xapilibi/xbox.h"


static BOOL gIsWideScreen = 1;

// name from WII U V0
void DefineActions() {
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0, 1);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 1, 2);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 2, 4);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 3, 8);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 4, 1);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 5, 2);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 6, 0x200400);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 7, 0x100800);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 9, 0x9000);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 8, 0x6000);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 10, 0x800000);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0xb, 0x400000);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0xc, 0x40);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0xd, 0x80);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0xe, 1);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0xf, 0x200000);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x10, 0x100000);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x11, 0x8000);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x12, 0x4000);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x13, 0x80000);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x14, 0x40000);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x15, 0x20000);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x16, 0x10000);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x17, 0x800000);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x18, 0x400000);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x1a, 0x40);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x19, 0x80);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x1c, 8);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x1d, 0x10);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x1e, 2);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x1f, 0x100);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x20, 4);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x22, 0x200);
    C_4JInput::sInstance.SetGameJoypadMaps(0, 0x23, 0x20);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0, 1);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 1, 2);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 2, 4);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 3, 8);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 4, 1);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 5, 2);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 6, 0x200400);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 7, 0x100800);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 9, 0x9000);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 8, 0x6000);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 10, 0x80);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0xb, 0x400000);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0xc, 0x40);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0xd, 0x80);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0xe, 0x40);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0xf, 0x200000);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x10, 0x100000);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x11, 0x8000);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x12, 0x4000);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x13, 0x80000);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x14, 0x40000);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x15, 0x20000);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x16, 0x10000);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x17, 0x400000);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x18, 0x800000);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x1a, 0x2000);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x19, 0x1000);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x1c, 8);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x1d, 0x10);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x1e, 2);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x1f, 0x200);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x20, 4);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x22, 0x100);
    C_4JInput::sInstance.SetGameJoypadMaps(1, 0x23, 0x20);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0, 1);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 1, 2);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 2, 4);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 3, 8);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 4, 1);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 5, 2);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 6, 0x200400);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 7, 0x100800);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 9, 0x9000);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 8, 0x6000);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 10, 0x480);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0xb, 0x400000);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0xc, 0x40);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0xd, 0x80);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0xe, 0x800000);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0xf, 0x200000);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x10, 0x100000);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x11, 0x8000);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x12, 0x4000);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x13, 0x80000);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x14, 0x40000);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x15, 0x20000);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x16, 0x10000);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x17, 0x400000);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x18, 1);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x1a, 0x2000);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x19, 0x1000);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x1c, 8);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x1d, 0x10);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x1e, 2);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x1f, 0x80);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x20, 4);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x22, 0x200);
    C_4JInput::sInstance.SetGameJoypadMaps(2, 0x23, 0x20);
}

void initD3D(D3DDevice** outDev, D3DPRESENT_PARAMETERS* params) {
    XVIDEO_MODE videoMode;
    memset(params, 0, sizeof(D3DPRESENT_PARAMETERS));
    XGetVideoMode(&videoMode);

    params->BackBufferCount = 1;
    params->BackBufferWidth = 1280;
    params->BackBufferHeight = 720;
    params->BackBufferFormat = D3DFORMAT::D3DFMT_A8R8G8B8;
    params->EnableAutoDepthStencil = true;
    params->AutoDepthStencilFormat = D3DFORMAT::D3DFMT_D24S8;
    params->SwapEffect = D3DSWAPEFFECT::D3DSWAPEFFECT_DISCARD;
    params->PresentationInterval = 1;

    gIsWideScreen = videoMode.fIsWideScreen;

    // this is very ugly but i can't get it to match any other way
    if (!gIsWideScreen) {
        params->Flags = true;
    } else {
        params->Flags = false;
    }

    Direct3D_CreateDevice(0, D3DDEVTYPE::D3DDEVTYPE_HAL, NULL, 1, params, outDev);
}

int main() {
    return 0;
}
