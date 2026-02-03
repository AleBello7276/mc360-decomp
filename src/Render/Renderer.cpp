#include "Renderer.h"
#include "d3d9i/d3d9caps.h"
#include "vectorintrinsics.h"

#include <string.h>

C4JRender C4JRender::sInstance;
Renderer C4JRender::gRenderer;
Renderer::Context* sContext;

#define VEC_ZERO() __vspltisw(0)

inline XMMATRIX MakeIdentity() {
	XMMATRIX out;
    XMVECTOR ZO = VEC_ZERO();
    ZO = __vupkd3d(ZO, VPACK_NORMSHORT2);
    
	out.r[0] = __vpermwi(ZO, 0xEA);
    out.r[1] = __vpermwi(ZO, 0xBA);
    out.r[2] = __vpermwi(ZO, 0xAE);
    out.r[3] = __vpermwi(ZO, 0xAB);
    return out;
}



// Context ctor + create the Buffered Device (Command Buffer)
Renderer::Context::Context(D3DDevice* dev) {
	m_Device = dev;

	Direct3D_CreateDevice(0, D3DDEVTYPE::D3DDEVTYPE_COMMAND_BUFFER, 0, 0, 0, &m_BuffDevice);

	for (size_t i = 0; i < STACK_LEVELS_COUNT; i++) {
		m_levels[i].m_Mtx[0] = MakeIdentity();
	}
}


void Renderer::InitialiseContext() {
	Context* ctx = new Context(this->m_d3dDevice);
	TlsSetValue((DWORD)sContext, ctx);
}


void Renderer::Initialise(D3DDevice* d3dDevice) {
    m_d3dDevice = d3dDevice;
	InitialiseContext();

	// TODO: Figure out what these arrays are 
	unk1 = (void*)(new uint8_t(0x7d000));
	unk2 = (void*)(new uint8_t(32000));
	unk3 = (void*)(new uint8_t(32000));
	unk4 = (void*)(new uint8_t(0x7d000));
	unk5 = (void*)(new uint8_t(32000));
	unk6 = (void*)(new uint8_t(8000));
	memset(unk1, 0xff, 0x7d000);
	memset(unk2, 0, 32000);
	memset(unk3, 0, 32000);
	memset(unk5, 0, 32000);
	memset(unk6, 0, 8000);
	unk7 = 0;
	unk8 = 0;
}
