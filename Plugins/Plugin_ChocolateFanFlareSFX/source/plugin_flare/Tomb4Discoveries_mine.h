
// FOR_YOU: here you can type your discoveries about tomb4 procedures
// if you mean use the C language to call them, you can create the
// prototypes of them like it has been done in the "DefTomb4Funct.h" file
// and "functions.h" file.
// While if you wish use only assembly code, you can type here
// the #define ADR_NOME_PROC 0x404040  to remember and use in the asm
// code all addresses of the tomb4 procedures

// TYPE_HERE: prototype (c++ language), mnemonic constants for 
// addresses (assembly)

typedef int (__cdecl *TYPE_GetLaraJointPos)(StrPosizione *pPos, int joint);
typedef int (__cdecl *TYPE_GetRandomDraw)(void);

TYPE_GetLaraJointPos GetLaraJointPos = (TYPE_GetLaraJointPos) 0x41D890;
TYPE_GetRandomDraw GetRandomDraw = (TYPE_GetRandomDraw) 0x48EB70;
