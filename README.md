# ThirdpersonOSX
CS:GO Thirdperson Angles for macOS

- Credits to iRaizo for releasing. The Files. ---> On UC

- Credits to Fuzion/Spartan for pasted code. ----> Linux Cheat

- Credits to myself for the header file (small) 

-In Hooks.cpp place This anywhere =   

pInput = *reinterpret_cast<CInput**>(GetAbsoluteAddress(getvfunc<uintptr_t>(pClient, 16) + 4, 3, 7));
   

