#include <windows.h>

#define DLLEXPORT extern __declspec(dllexport)

DLLEXPORT PCHAR RetStr(){
    PCHAR  LegitStr = "[I] Run Legit Print :D\n";
    return LegitStr;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    switch (dwReason) {
    case DLL_PROCESS_ATTACH:
        printf("[I] Attach Legit DLL\n");
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}