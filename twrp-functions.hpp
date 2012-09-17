#ifndef _TWRPFUNCTIONS_HPP
#define _TWRPFUNCTIONS_HPP

#include <string>

using namespace std;

// Partition class
class TWFunc
{
public:
	static int Check_MD5(string File);
	static string Get_Root_Path(string Path);                                   // Trims any trailing folders or filenames from the path, also adds a leading / if not present
	static string Get_Path(string Path);                                        // Trims everything after the last / in the string
	static string Get_Filename(string Path);                                    // Trims the path off of a filename

	static void install_htc_dumlock(void);                                      // Installs HTC Dumlock
	static void htc_dumlock_restore_original_boot(void);                        // Restores the backup of boot from HTC Dumlock
	static void htc_dumlock_reflash_recovery_to_boot(void);                     // Reflashes the current recovery to boot
	static int Recursive_Mkdir(string Path);                                    // Recursively makes the entire path
	static unsigned long long Get_Folder_Size(string Path, bool Display_Error); // Gets the size of a folder and all of its subfolders using dirent and stat
	static bool Path_Exists(string Path);                                       // Returns true if the path exists

};

#endif // _TWRPFUNCTIONS_HPP
