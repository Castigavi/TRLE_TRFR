TRLE Sound Editor Ver 1.1 changes

SoundID 27 is now unblocked but like any other sound will not be used if there are no sample names for it.

Sample names must be at least two characters long. Applies also to version 1.

Can have up to ten letters or numbers or mixture as wad association letters. e.g. MOA2.
The association 'g' and 'cut' are banned. Non alphanumeric characters and spaces are removed.

The files that the program uses as a reference have being changed to have *.txt extension.
Makes it easier for users to make changes. Please make backups of the originals if you make changes.

StandardSounds.txt is where the standard default sounds are stored. If you want to make a change to the default
sound names or sound values or sample names, change them here.  e.g. change "Don't_use_this_space:" to "Lara_bodyslam:"
Make sure to keep the colon ':' at the end and have no spaces if changing a name.

NGLEObjects.txt is where the standard slot names are stored. Do not change anything here but if new NGLE objects
are created by Paolone you can add the names here. The line number corresponds to the slot number.

HardCoded.txt is where the hardcoded sounds for the slots are stored. This file is incomplete.
If a slot uses a hardcoded sound which doesn't show up in the program, add that sound to the slot in this file.
Do not change the slot names. They must match those in NGLEObjects.txt. Add new object names same as for NGLEObjects.txt.

A new tab has been added to show the hard coded sounds. Hardcoded sounds will be added to sounds.txt if checked in this tab (as long
as there are sample names). If you don't want a sound uncheck it. You have to uncheck the same sound everywhere it appears
to ensure it is not included in sounds.txt.
If a sounds.txt has been generated before you uncheck/check any sound, it will be erased and you will have to create it again.
The hardcoded sounds only appear if a *.wad file is opened. If you want to add sounds to a sounds.txt file you opened by object, use MagPlus'
SFX manager program instead.
If you never want to use hard coded sounds then either rename the file or remove the sounds in it or add a ';' to the start of any lines with
numbers in them.
Added right click menu to Objects tab to collapse or expand tree.

The summary tab has been updated to show which sounds are included from the Object tab. Marked as "OBJ".

A standard V130 Sounds.txt has been included in download but is not used by the program.

When you go to output SFX and SAM, if there are no lines with the current Wad association letters, you now
have the option to continue.

Fixed a memory leak bug when saving the SFX tab with wad letters. (Forgot to free a StringList)

The program was previously only tested on winXP but now I have win8.1 I discovered it wouldn't open files in program files due UAC.
The program should now read files from program files without the need to run as administrator.

Noticed that the wad tab and sfx tab were using hardcoded sound names and not those from the StandardSounds.txt. Changed this so if the user
modifies sound names in StandardSounds.txt, those names will be used in those two tabs as well.

Added code from my LevelSFXCreator program so that SFX and SAM files can be created from V130 Sounds.txt files.

Changed form for changing wad letters. Now can press enter to press OK button and added cancel button.
Wadletters will be stored in the ini file and so remembered next run of program.

Added Goto Sound/Line function

Changed RightClick menu addsound. Should now work for sounds.txt lines that have multiple associations. The added sound will be first.

Any sounds.txt opened will now be formatted nicely.

Open dialog now defaults to All supported file extensions rather than *.wad

Added Search function

Add feature to add default PIT, RAD, CH, VOL values to a line that doesn't have them so if user wants to add a value
to a line can modify the default value rather than type it all in.

If pcwadsfx.exe is not in the output folder the inbuilt SFX and SAM creator will now be used.
If there is an error creating the bat file for pcwadsfx.exe then the inbuilt SFX and SAM creator will be used.
The bat file for pcwadsfx.exe now turns off echo.

If any sounds that associated are not used because they have no samples a notification will appear in the SFX and SAM output.

The menu option "Default Values blank" has been disabled if a sounds.txt has been created or loaded since this option reloads
the opened filed and would undo any changes to sounds.txt.

Fixed some more memory leak bugs. They would only have appeared if an incorrect standardsounds.txt or sounds.txt was opened.

If a VOL, RAD, CH, PIT value is entered as VOL00 for instance, pcwadsfx.exe will think it is a sample name. SoundEditor now checks
for this so VOL00 would change to VOL0.

Added some colour to some icons so it's easier to see when they are disabled (greyed out).

Added feature to set the location of your Samples folder in Options menu. If a folder is set here, then when an SFX is created
the user will be notified if the sample is not present in the folder. If the sample is not found maybe there is a mistake in sounds.txt.

WARNING: Pressing the mousewheel/middle button will paste the clipboard text or selected text, if any, into the sounds.txt
So take care when scrolling. I have been unable to disable this feature yet.  Applies also to version 1.







