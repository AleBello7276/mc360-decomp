#pragma once
#include <types.h>
#include <xinc.h>

// test
// template<uint16_t* cName, uint16_t* bcName, void* proc>
// HRESULT TregisterClass()
//{
//	XUIClass xuiClass;
//	xuiClass.cbSize = 0;
//	xuiClass.szClassName = (LPCWSTR)cName;
//	xuiClass.szBaseClassName = (LPCWSTR)bcName;
//	XuiRegisterClass(&xuiClass);
//}

class CMinecraftApp {
public:
    void* pUnk1;
    HXUIDC m_XDC;
    BOOL unk3;
    BOOL isInit;
    uint32_t unk4;
    uint32_t unk5;
    char pad[0x1e8];
    LARGE_INTEGER PerfFreq;
    LARGE_INTEGER PerfCount;
    uint64_t unk218;
    float unk220;
    float unk224;
    float mTimeScale;

    CMinecraftApp();
    virtual ~CMinecraftApp();
    virtual void RegisterXuiClasses() = 0;

    void InitTime();
    void DebugPrintf(char* fmt, ...);
    HRESULT InitialiseXui();
};

class CXboxMinecraftApp : public CMinecraftApp {
public:
    static CXboxMinecraftApp sInstance;

    CXboxMinecraftApp();
    ~CXboxMinecraftApp() {};

    void RegisterXuiClasses() override;
};
