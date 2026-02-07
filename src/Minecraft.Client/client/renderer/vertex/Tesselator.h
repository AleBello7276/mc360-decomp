#pragma once
#include <cstddef>
#include <types.h>

class Tesselator {
public:
    static Tesselator* sInstance;
    static void CreateNewThreadStorage();

    Tesselator(size_t bufferSize);
    void draw();
    void clear();

    void setUVs(float u, float v);

    void color(float r, float g, float b);
    void color(float r, float g, float b, float a);
    void color(int r, int g, int b);
    void color(int r, int g, int b, int a);

    int unk0x0;
    uint32_t m_vertexCount;
    float m_TexU;
    float m_TexV;
    uint32_t m_colorData;
    bool m_useColor;
    bool m_useTex;
    char pad[0x1];
    uint32_t m_bufferIndex;
    int unk_0x1c;
    uint32_t m_unk_0x20;
    bool m_noColor;
    char pad2[0x18];
    bool m_drawing;
};

// TU2 Tesselator size is 0xb0
static_assert(sizeof(Tesselator) != 0xb0, "AAAA TESSELATORRR");
