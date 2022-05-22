// let below pragma directive at top of this source
#pragma pack(1)

// TYPE_HERE: here you can type your structure definitions like it has been done
// in the "structures.h" file for trng dll

struct PHD_VECTOR
{
	long x;
	long y;
	long z;
};

struct SPRITESTRUCT
{
	unsigned short tpage;
	unsigned short offset;
	unsigned short width;
	unsigned short height;
	float x1;
	float y1;
	float x2;
	float y2;
};

struct TEXTURESTRUCT
{
	unsigned short drawtype;
	unsigned short tpage;
	unsigned short flag;
	float u1;
	float v1;
	float u2;
	float v2;
	float u3;
	float v3;
	float u4;
	float v4;
};

struct FLOOR_INFO
{
	unsigned short index;
	unsigned short fx : 4;
	unsigned short box : 11;
	unsigned short stopper : 1;
	unsigned char pit_room;
	char floor;
	unsigned char sky_room;
	char ceiling;
};

enum matrix_indices
{
	M00, M01, M02, M03,
	M10, M11, M12, M13,
	M20, M21, M22, M23,

	indices_count
};

typedef float D3DVALUE, *LPD3DVALUE;

typedef DWORD D3DCOLOR;

typedef struct _D3DTLVERTEX {
    union {
    D3DVALUE    sx;
    D3DVALUE    dvSX;
    };
    union {
    D3DVALUE    sy;
    D3DVALUE    dvSY;
    };
    union {
    D3DVALUE    sz;
    D3DVALUE    dvSZ;
    };
    union {
    D3DVALUE    rhw;
    D3DVALUE    dvRHW;
    };
    union {
    D3DCOLOR    color;
    D3DCOLOR    dcColor;
    };
    union {
    D3DCOLOR    specular;
    D3DCOLOR    dcSpecular;
    };
    union {
    D3DVALUE    tu;
    D3DVALUE    dvTU;
    };
    union {
    D3DVALUE    tv;
    D3DVALUE    dvTV;
    };
} D3DTLVERTEX, *LPD3DTLVERTEX;

struct FOOTPRINT
{
	long x;
	long y;
	long z;
	short YRot;
	short Active;
	unsigned short fx : 4;
};

struct footprint_options {
	char blend_mode;
	short sprite;
	short index;
	short life;
	short fade;
	bool tilt;
};

// --------------- PRESET STRUCTURE ZONE -----------------------------
// Please, don't remove structures and fields you find in this "PRESET ZONE". They will be used by some
// preset functions of your plugin sources
// However, you can add new fields and structures in following structures, of course
typedef struct StrSavegameGlobalData {
	// FOR_YOU:
	// define here your variables that you wish were saved (and then restored) to/from savegame in GLOBAL section 
	//           (only one for all levels)
	// note: the size of this structure should be always even (if you add BYTE variable, remember to compensate that 
	//       with another BYTE vairable or placefolder)

	
}SavegameGlobalDataFields;

typedef struct StrSavegameLocalData {
	// FOR_YOU:
	// define here your variables that you wish were saved (and then restored) to/from savegame in LOCAL section (one for each different level)
	// note: the size of this structure should be always even (if you add BYTE variable, compensate it with another BYTE vairable or placefolder)

}SavegameLocalDataFields;


typedef struct StrSavegameData {
	StrSavegameGlobalData Global;
	StrSavegameLocalData  Local;
}SavegameDataFields;


typedef struct StrBaseAssignSlotMine {
	int TotAssign;
	StrRecordAssSlot VetAssignSlot[MAX_ASSIGN_SLOT_MINE];
}BaseAssignSlotMineFields;

typedef struct StrMyData {
	StrSavegameData Save;  // variable that it will be saved and restored to/from savegame
	// FOR_YOU:
	// define here all your global variables, i.e. those variables that will be seen from all procedures and keep 
	// their value between all cycles of the game.
	// after you defined a variabile like:
	// int  Alfa;
	// then you'll be able to access to them using syntax like:
	// MyData.Alfa = 3;
	// if (MyData.Alfa == 5) .
	int TotProgrActions;
	int LastProgrActionIndex; // used in case of overloading

	StrProgressiveAction VetProgrActions[MAX_MYPROGR_ACTIONS];
	StrBaseGenericCustomize BaseCustomizeMine;  // stored all your customize script commands for current level
	StrBaseGenericParameters BaseParametersMine; // store of all your parameters= script commands of current level
	StrBaseAssignSlotMine BaseAssignSlotMine; // stored all AssignSlot= command script commands of current level
}MyDataFields;
// ----------------- END PRESET STRUCTURE ZONE ---------------------------------------


// let below pragma directive at bottom of this source
#pragma pack(2)