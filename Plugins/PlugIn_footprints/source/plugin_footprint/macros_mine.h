
// TYPE_HERE: here you can type your new macros  using the #define directive
// like trng did it in the "macros.h" file

#define RGBONLY(r, g, b) ((b & 0xFF) | (((g & 0xFF) | ((r & 0xFF) << 8)) << 8))
#define RGBA(r, g, b, a) (RGBONLY(r, g, b) | ((a) << 24))
#define ABS(x) (((x)<0) ? (-(x)) : (x))
 
#define ARRAY_(address, type, length)	(*(type(*)length)(address))
#define VAR_U_(address, type)			(*(type*)(address))

#define phd_mxptr VAR_U_(0x007E70C8, long*)
#define objects	ARRAY_(0x0052B720, StrSlot, [SLOT_NUMBER_OBJECTS])
#define spriteinfo VAR_U_(0x00533994, SPRITESTRUCT*)
#define clipflags VAR_U_(0x00753854, short*)
#define lara_item VAR_U_(0x0080E01C, StrItemTr4*)
#define nPolyType VAR_U_(0x007E70D0, long)
#define FXType VAR_U_(0x007FE6C0, short)

#define AddTriSorted ( *(void(__cdecl**)(D3DTLVERTEX*, short, short, short, TEXTURESTRUCT*, long)) 0x0053399C )
#define effect_routines ( *(void(__cdecl*(*)[47])(StrItemTr4*)) 0x004ABE80 )
