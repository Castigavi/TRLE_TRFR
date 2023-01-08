
// FOR_YOU: here you can type your discoveries about tomb4 procedures
// if you mean use the C language to call them, you can create the
// prototypes of them like it has been done in the "DefTomb4Funct.h" file
// and "functions.h" file.
// While if you wish use only assembly code, you can type here
// the #define ADR_NOME_PROC 0x404040  to remember and use in the asm
// code all addresses of the tomb4 procedures

// TYPE_HERE: prototype (c++ language), mnemonic constants for 
// addresses (assembly)

typedef void(__cdecl* TYPE_phd_TranslateRel)(int x, int y, int z);
typedef void(__cdecl* TYPE_phd_pushUnitMatrix)();
typedef void(__cdecl* TYPE_setXYZ3)(void* v, long x1, long y1, long z1, long x2, long y2, long z2, long x3, long y3, long z3, short* clip);
typedef int(__cdecl* TYPE_GetLaraJointPos)(StrPosizione* pPos, int joint);
typedef void(__cdecl* TYPE_AddFootprint)(StrItemTr4* pItem);

TYPE_phd_TranslateRel phd_TranslateRel = (TYPE_phd_TranslateRel)0x0048DFD0;
TYPE_phd_pushUnitMatrix phd_pushUnitMatrix = (TYPE_phd_pushUnitMatrix)0x0048DF90;
TYPE_setXYZ3 setXYZ3 = (TYPE_setXYZ3)0x00483BD0;
TYPE_GetLaraJointPos GetLaraJointPos = (TYPE_GetLaraJointPos)0x0041D890;
TYPE_AddFootprint AddFootprint = (TYPE_AddFootprint)0x00437790;
