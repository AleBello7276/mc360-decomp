#include "d3d9/d3d9.h"
#include "xapilibi/xbox.h"
#include "LIBCMT/string.h"

/*int initD3D(void *param_1,_D3DPRESENT_PARAMETERS_ *param_2)
{
  int iVar1;
  _XVIDEO_MODE videoMode;
  
  memset(param_2,0,0x7c);
  XGetVideoMode(&videoMode);
  param_2->BackBufferCount = 1;
  param_2->BackBufferWidth = 0x500;
  param_2->BackBufferHeight = 0x2d0;
  param_2->BackBufferFormat = 0x18280186;
  param_2->EnableAutoDepthStencil = 1;
  param_2->AutoDepthStencilFormat = 0x2d200196;
  param_2->SwapEffect = 1;
  param_2->PresentationInterval = 1;
  DAT_8299f098 = videoMode.WideScreen;
  param_2->Flags = (uint)(videoMode.WideScreen == 0);
  iVar1 = CreateDevice(0,1,0,1,(uint32_t)param_2,(void **)param_1);
  return iVar1;
}*/


static BOOL isWideScreen = 0;

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
    
    isWideScreen = videoMode.fIsWideScreen;

    // this is very ugly but i can't get it to match any other way
    if(!isWideScreen) {
        params->Flags = true;
    } else {
        params->Flags = false;
    }

    Direct3D_CreateDevice(0, D3DDEVTYPE::D3DDEVTYPE_HAL, NULL, 1, params, outDev);
}

int main() {
    return 0;
}
