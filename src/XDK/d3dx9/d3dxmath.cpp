#include "d3dx9math.h"

#include <vectorintrinsics.h>

#ifdef __cplusplus
extern "C" {
#endif

void D3DXFloat32To16Array(D3DXFLOAT16 *out, const FLOAT *in, UINT len) {
    if (len == 0)
        return;

    for (UINT i = 0; i < len; i++) {
        D3DXFLOAT16 tempOut;
        FLOAT thisFloat = in[i];
        XMVECTOR curFloat = __lvx(&thisFloat, 0);
        XMVECTOR perm = __lvsl(&thisFloat, 0);
        curFloat = __vperm(curFloat, curFloat, perm);
        curFloat = __vpkd3d(curFloat, curFloat, VPACK_FLOAT16_4, VPACK_64_1, 2);
        curFloat = __vsplth(curFloat, 0);
        __stvehx(curFloat, &tempOut, 0);
        out[i] = tempOut;
    }
}
#ifdef __cplusplus
}
#endif
