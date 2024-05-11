#include <windows.h>

/*---------------------------[ Payload ]---------------------------*/

void ProcAtt(){

	printf("[I] DLL Sideloading in PROCESS ATTACH >:)\n");

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