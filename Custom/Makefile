foward:
	x86_64-w64-mingw32-gcc .\Sources\DLL_Legit.c -shared -w -o .\Bin\Dll_Legit1.dll
	x86_64-w64-mingw32-gcc .\Sources\Dll_Mal_Foward.c -shared -w -o .\Bin\Dll_Legit.dll .\Sources\Dll_Mal_Foward.def
	x86_64-w64-mingw32-gcc .\Sources\Custom_Software.c -w -o .\Bin\Custom_Software.exe

no-foward:
	x86_64-w64-mingw32-gcc .\Sources\DLL_Legit.c -shared -w -o .\Bin\Dll_Legit1.dll
	x86_64-w64-mingw32-gcc .\Sources\Dll_Mal_NoFoward.c -shared -w -o .\Bin\Dll_Legit.dll 
	x86_64-w64-mingw32-gcc .\Sources\Custom_Software.c -w -o .\Bin\Custom_Software.exe