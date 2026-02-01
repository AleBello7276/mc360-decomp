#include "Renderer.h"

#include <string.h>

C4JRender C4JRender::sInstance;
Renderer C4JRender::gRenderer;

void Renderer::Initialise(D3DDevice* d3dDevice) {
    m_d3dDevice = d3dDevice;
	this->CreateCommandBuffer();

	// TODO: Figure out what these arrays are 
	this->unk1 = (void*)(new uint8_t(0x7d000));
	this->unk2 = (void*)(new uint8_t(32000));
	this->unk3 = (void*)(new uint8_t(32000));
	this->unk4 = (void*)(new uint8_t(0x7d000));
	this->unk5 = (void*)(new uint8_t(32000));
	this->unk6 = (void*)(new uint8_t(8000));
	memset(this->unk1, 0xff, 0x7d000);
	memset(this->unk2, 0, 32000);
	memset(this->unk3, 0, 32000);
	memset(this->unk5, 0, 32000);
	memset(this->unk6, 0, 8000);
	this->unk7 = 0;
	this->unk8 = 0;
}


void C4JRender::Initialise(D3DDevice* d3dDevice) {
    gRenderer.Initialise(d3dDevice);
}
