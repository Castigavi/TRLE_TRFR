
// TYPE_HERE: here you can type your mnemonic constants, using the #define directive
// like trng did it in the "Tomb_NextGeneration.h" file
// in this source you can also type your declaration of tomb raider function
// like it happens for "functions.h" source

// -------- START PRESET CONSTANTS ---------------------------------
// please don't remove the constants in this "PRESET CONSTANT" zone. 
// They will be used by some preset function in your plugin source

#define MAX_MYPROGR_ACTIONS 100
#define MAX_ASSIGN_SLOT_MINE 200

#define ENDLESS_DURATE 0xFFFF // to use as number of frames to set an infinite durate
#define NGTAG_END_SEQUENCE		   0   // signals the end of ng token sequence
#define NGTAG_PROGRESSIVE_ACTIONS  1
#define NGTAG_LOCAL_DATA           2
#define NGTAG_GLOBAL_DATA          3
#define AXN_FREE  0  // this record is to free an action record. You type this value in ActionType to free a action progress record
// --------- END PRESET CONSTANTS ---------------------------------
// type here the constant name for new progressive action you create
// use progressive number to have always different value for each AXN_ constant/action


// MPS_ flags
// you should type here your MPS_ flags for plugin command.
// then you'll test the presence of these flags checking the Trng.MainPluginFlags  value using "&" operator
// please: do not use the value 0x40000000 (MPS_DISABLE) because it has been already set by trng engine

#define CUST_FOOTPRINT 1

#define ARGUMENT_COUNT_FOOTPRINT 7

#define FLIPEFFECT_SET_ARRAY_SIZE 1
#define FLIPEFFECT_CLEAR_ARRAY 2
