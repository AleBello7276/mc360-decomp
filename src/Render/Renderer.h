
#include <types.h>
#include "d3d9i/d3d9.h"
#include "d3dx9/d3dx9shader.h"
#include "vectorintrinsics.h"

#define STACK_LEVELS_COUNT 4
#define LEVEL_MATX_COUNT 16


class Renderer {
public:

	struct Context {
		//char pad[0x1024];
		D3DDevice* m_Device;
    	int t[5];
		UINT64 a;

		struct StackLevel {
			XMMATRIX m_Mtx[LEVEL_MATX_COUNT];
		};

		StackLevel m_levels[STACK_LEVELS_COUNT];
		D3DDevice* m_BuffDevice;
		int pad2[0xB8];

		Context(D3DDevice* dev);
	};



	D3DDevice* m_d3dDevice;
	void* unk1;
	void* unk2;
	void* unk3;
	void* unk4;
	void* unk5;
	void* unk6;
	uint32_t unk7;
	uint32_t unk8;
	uint32_t criticalSection;
	uint32_t gap6[6];

	D3DVertexShader** m_vxShaderHandles;
	D3DVertexShader* m_vxShader_0x44;
	D3DPixelShader* m_pxShader_0x48;
	D3DPixelShader* m_pxShader_0x4c;
	char** m_vxShaderSrcs;


	void Initialise(D3DDevice* d3dDevice);
	void InitialiseContext();
	void SetupShaders();
};



struct C4JRender {
public:
    static C4JRender sInstance;

	void InitialiseContext();
    void Initialise(D3DDevice* d3dDevice);
private:
	int something;
    int something2;
	static Renderer gRenderer;
};
