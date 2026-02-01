#pragma once

#include <stdint.h>



#ifdef __cplusplus
extern "C" {
#endif

#define CONST const
#define CALLBACK __stdcall
#define WINAPI __stdcall

typedef void VOID, *PVOID, *LPVOID;
typedef CONST VOID *LPCVOID;

typedef uint8_t BYTE, *PBYTE, *LPBYTE;
typedef int BOOL, *PBOOL, *LPBOOL;
typedef BYTE BOOLEAN, *PBOOLEAN;

typedef char CCHAR, CHAR, *PCHAR, *PSTR, *LPSTR;
typedef CONST CHAR *PCSTR, *LPCSTR;
typedef int8_t INT8, *PINT8;
typedef uint8_t UCHAR, *PUCHAR;
typedef uint8_t UINT8, *PUINT8;

typedef int16_t HALF_PTR, *PHALF_PTR;
typedef int16_t SHORT, *PSHORT;
typedef signed short INT16;
typedef INT16 *PINT16;

typedef uint16_t UHALF_PTR, *PUHALF_PTR;
typedef uint16_t USHORT, *PUSHORT;
typedef uint16_t UINT16, *PUINT16;
typedef uint16_t WORD, *PWORD, *LPWORD;

typedef wchar_t WCHAR, *PWCHAR, *PWSTR, *LPWSTR;
typedef CONST WCHAR *PCWSTR, *LPCWSTR;

typedef float FLOAT, *PFLOAT;

typedef int INT, *PINT, *LPINT;
typedef int INT_PTR, *PINT_PTR;
typedef signed int INT32, *PINT32;

typedef uint32_t UINT, *PUINT;
typedef uint32_t UINT_PTR, *PUINT_PTR;
typedef uint32_t UINT32, *PUINT32;
typedef uint32_t ULONG32, *PULONG32;

typedef int32_t LONG, *PLONG, *LPLONG;
typedef int32_t LONG_PTR, *PLONG_PTR;
typedef signed int LONG32, *PLONG32;

typedef uint32_t ULONG, *PULONG;
typedef uint32_t ULONG_PTR, *PULONG_PTR;

typedef uint32_t DWORD, *PDWORD, *LPDWORD;
typedef uint32_t DWORD32, *PDWORD32;
typedef ULONG_PTR DWORD_PTR, *PDWORD_PTR;

typedef ULONG_PTR SIZE_T, *PSIZE_T;
typedef LONG_PTR SSIZE_T, *PSSIZE_T;

typedef int64_t LONGLONG, *PLONGLONG;
typedef signed long long INT64, *PINT64;
typedef int64_t LONG64, *PLONG64;

typedef union _LARGE_INTEGER { /* Size=0x8 */
    struct {
        /* 0x0000 */ LONG HighPart;
        /* 0x0004 */ DWORD LowPart;
    };
    /* 0x0000 */
    struct {
        /* 0x0000 */ LONG HighPart;
        /* 0x0004 */ DWORD LowPart;
    } u;
    /* 0x0000 */ LONGLONG QuadPart;
} LARGE_INTEGER, *PLARGE_INTEGER;

typedef uint64_t QWORD;
typedef uint64_t ULONGLONG, *PULONGLONG;
typedef uint64_t UINT64, *PUINT64;
typedef uint64_t ULONG64, *PULONG64;
typedef uint64_t DWORDLONG, *PDWORDLONG;
typedef uint64_t DWORD64, *PDWORD64;

typedef union _ULARGE_INTEGER { /* Size=0x8 */
    struct {
        /* 0x0000 */ DWORD HighPart;
        /* 0x0004 */ DWORD LowPart;
    };
    struct {
        /* 0x0000 */ DWORD HighPart;
        /* 0x0004 */ DWORD LowPart;
    } u;
    /* 0x0000 */ ULONGLONG QuadPart;
} ULARGE_INTEGER, *PULARGE_INTEGER;

typedef LONG_PTR LPARAM;
typedef LONG_PTR LRESULT;
typedef UINT_PTR WPARAM;

typedef PVOID HANDLE, *LPHANDLE;
typedef HANDLE HDC;
typedef HANDLE HTASK;
typedef HANDLE HINSTANCE;
typedef int HFILE;
typedef HINSTANCE HMODULE;
typedef LONG HRESULT;

#define INVALID_HANDLE_VALUE ((HANDLE)(LONG_PTR) - 1)
#define SUCCEEDED(hr) (((HRESULT)(hr)) >= 0)

typedef DWORD FOURCC;

#define MAKEFOURCC(ch0, ch1, ch2, ch3)                                                   \
    ((DWORD)(BYTE)(ch0) | ((DWORD)(BYTE)(ch1) << 8) | ((DWORD)(BYTE)(ch2) << 16)         \
     | ((DWORD)(BYTE)(ch3) << 24))

typedef struct _GUID { /* Size=0x10 */
    /* 0x0000 */ DWORD Data1;
    /* 0x0004 */ WORD Data2;
    /* 0x0006 */ WORD Data3;
    /* 0x0008 */ BYTE Data4[8];
} GUID;

#ifdef __cplusplus
}
#endif
