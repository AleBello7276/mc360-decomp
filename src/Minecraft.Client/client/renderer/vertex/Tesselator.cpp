#include "Tesselator.h"

#include "Render/Renderer.h"

void CreateNewThreadStorage() {
    Tesselator* inst = new Tesselator(0x40000);
    TlsSetValue((DWORD)Tesselator::sInstance, inst);
}

Tesselator::Tesselator(size_t bufferSize) {}

void Tesselator::draw() {
    m_drawing = false;
    if (m_vertexCount > 0) {
    }

    clear();
}

void Tesselator::clear() {
    m_vertexCount = 0;
    m_bufferIndex = 0;
    m_unk_0x20 = 0;
}

void Tesselator::setUVs(float u, float v) {
    m_useTex = true;
    m_TexU = u;
    m_TexV = v;
}

void Tesselator::color(float r, float g, float b) {
    color((int)(r * 255.0f), (int)(g * 255.0f), (int)(b * 255.0f));
}

void Tesselator::color(float r, float g, float b, float a) {
    color((int)(r * 255.0f), (int)(g * 255.0f), (int)(b * 255.0f), (int)(a * 255.0f));
}
void Tesselator::color(int r, int g, int b) {
    color(r, g, b, 255);
}

void Tesselator::color(int r, int g, int b, int a) {
    if (!m_noColor) {
        if (r > 255)
            r = 255;

        if (g > 255)
            g = 255;

        if (b > 255)
            b = 255;

        if (a > 255)
            a = 255;

        if (r < 0)
            r = 0;

        if (g < 0)
            g = 0;

        if (b < 0)
            b = 0;

        if (a < 0)
            a = 0;

        m_useColor = true;
        m_colorData = r << 24 | g << 16 | b << 8 | a;
    }
}
