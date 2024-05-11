#include <windows.h>

typedef PCHAR(*fnRetStr)();

int main(){
    HMODULE  hLegitDll = LoadLibraryA("Dll_Legit.dll");
    fnRetStr pRetStr   = (fnRetStr)GetProcAddress( hLegitDll, "RetStr" ); 
    PCHAR    Str       = pRetStr();
    
    printf(Str);

}