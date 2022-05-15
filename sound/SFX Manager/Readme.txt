***************************************************************
*
* SFX_MANAGER : made by Pascal (Magplus) DUCEY  2005-2013 V2.1
* ------------------------------------------------------------
* This program shouldn't be hosted anywhere w/o my agreement
* it's not supported by Core Design and Eidos
*
***************************************************************

INSTALLATION OF A NEW VERSION
-----------------------------

Extract the archive and copy all the files in SFX Manager installation directory.
Replace all the files when prompted.



VERSION 2.1   04/26/2013   (what's new)
-----------

1/ New tool box that allow you to visualize sounds.txt file
	- If modifications have been made in SFX Manager and not applied, you'll see sounds.txt in viewing mode only
	- If no modification in SFX Manager, it'll run Windows Notepad.exe
	  When returning to SFX Manager, you'll have the choice to reboot the program and reload sounds.txt, in the case you changed something with the notepad.

2/ New application [Parameters] tool box that allow you to :
	- select the language used for SFX Manager
	- select the Windows Notepad running mode
	- authorize or not the modification of 'empty' anf 'unsure' lines

3/ New control on the format of samples files. No header informations.

4/ Minor bug fixed



VERSION 2.0   04/08/2013   (what's new)
-----------

1/ SFX Manager interface reorganized

2/ New Play/Stop buttons for samples

3/ New function => Managing Wads/Letters can be made for more than wad at the same time, using new user references

4/ New function => replace the letter for all the sounds of the wad

5/ Nex control on used samples format when genrating SFX Files

6/ New function => choose a sample from \sound\Samples directory

7/ Online help updated

8/ Program Icon changed

9/ Minor bugs fixed


VERSION 1.3   03/28/2013   (what's new)
-----------

1/ New controls about directories Windows authorizations

2/ New control on renamed sample format

3/ New function => Control of the format of all the samples from \sound\Samples directory

4/ New function => Add and Remove a sample

5/ New message when exiting the program if the modifications havenot been applied

6/ New function => Restore original \Samples directory (with "Restore Defaults" function)

7/ New function => Restore Original SAM/SFX files (with "RTestore Defaults" function)

8/ Lara samples all referenced in a new object category named "Lara"

9/ Online help updated

10/ Minor bugs fixed


VERSION 1.2   03/08/2013
-----------

1/ Now you can select NGLE.EXE as level editor

2/ email address updated

3/ New important informations added to this file (see Intall and run)

4/ Sample 276 added for HARPY ennemy

5/ "Samples values" frame reorganized and tooltip texts added for some values

6/ Online help modified to explain in detail each sample value (Origin of the text by Titak)

7/ All TR4 letters are now referenced


VERSION 1.1   10/10/2012
-----------

1/ Many bugs fixed

2/ Features :

	- new interface
	- program in english and french
	- new function => load SAM or WAS file
	- new function => add and remove objects
	- new function => change sample values, such as VOL, CH, PIT and RAD
	- new function => rename samples names



1st INSTALL OF THE PROGRAM
--------------------------

1/ Place SFX_MANAGER.RAR content wherever you want


2/ You may have to install VB6FR.DLL coming with VB6FR.RAR
If needed, copy VB6FR.DLL in your Windows system folder,

for example :

c:\windows\system32\	for Xp
c:\windows\syswow64\	for Seven 64bits


3/ 1st launch of SFX Manager : select your level editor (winroomedit.exe or ngle.exe)


-------------------------------------------------------------------------------------------------------
4/ Restrictions and important notes before using this tool :
-------------------------------------------------------------------------------------------------------

     . This program automatically loads/saves from standard level editor structure folders.

	You can have your level editor placed wherever on your computer, but the paths structure must be the same as a standard level editor.
	For example, if you have your level editor placed in ....... :	X:\My LE path\
	then, you must have also.................................... :	X:\My LE path\graphics\wads\	with your own wads
									X:\My LE path\sound\		with ...\LevelSFX Creator\   and   ...\Samples\

     . To TRWEST users :		- You can use this tool w/o any restriction
				- remember that each time you regenerate your WAD with TRWEST, 
				you need to recreate SFX files with this tool.

     . To WADMERGER users :	- Sounds coming from other TR are not recognized by this program
				and are lost. But, you can re-incorporate such sounds using Wadmerger again.
				I suggest to create temporary Wads containing objects using non TRLE sounds
				in order to copy them back to the Wad after using this tool.




--------------

For further informations on how it works, see help window in the program.


To report any bug, please send me a message to pascal-ducey.home@orange.fr

Have fun!


