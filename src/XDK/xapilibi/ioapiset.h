#pragma once
#include <types.h>
#include "minwinbase.h"
#include "wtypesbase.h"

#ifdef __cplusplus
extern "C" {
#endif

BOOL GetOverlappedResult(
    HANDLE hFile, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, BOOL bWait
);

#ifdef __cplusplus
}
#endif
