// Importing Libraries

#include <iostream>
#include <windows.h>

// Making cmd.exe do its job

int main() {
    HWND hwnd = GetConsoleWindow();
    ShowWindow(hwnd, SW_MAXIMIZE);
    
    // Credits list intilizer.. or something... idk

    std::string credits;
    
     // ASCII ART TIMEEEEEEE
	
     std::cout << "-----------------------\n";
     std::cout << "|                     |\n";
     std::cout << "| Welcome To Arz CLI  |\n";
     std::cout << "|                     |\n";
     std::cout << "-----------------------\n";
     
     // CREDITS BOIIIIIIIIIIII

     std::cout << "Arz, Coded by Orion, Credits by Orion, Commands by Orion, Help by Orion\n";
     std::cout << "Sponsered by my mental help\n";
     std::cout << " \n";
     std::cout << "Arz Version 0.1\n";
     std::cout << " \n";
    
    // Command list creator
     
    std::string command;
    while (true) {
        std::cout << "Arz CLI > ";
        std::cin >> command;
        
        // Command Functions
        
        if (command == "help") {
            
            // Displaying Avalible Commands

            std::cout << "List of available commands:\n";
            std::cout << "1. clear\n";
		std::cout << "This command can be used to clear the previous command outputs\n";
            std::cout << "2. pcinf\n";
            std::cout << "This command lists your pc's information\n";
            std::cout << "3. Explore\n";
            std::cout << "This command launches explore Arz's File explrer\n";
        } else if (command == "clear") {
            
            // Its self explanitory
            
            system("cls");
        } else if (command == "pcinf") {
            
            // PC Info Grabbing UwU

            SYSTEM_INFO sysInfo;
            GetSystemInfo(&sysInfo);
            
            // Printing CPU info

            std::cout << "Number of Processors: " << sysInfo.dwNumberOfProcessors << std::endl;
            std::cout << "Page Size: " << sysInfo.dwPageSize << std::endl;
            
            // Grabbing RAM info (wow)

            MEMORYSTATUSEX memInfo;
            memInfo.dwLength = sizeof(memInfo);
            GlobalMemoryStatusEx(&memInfo);
            
            // Printing RAM info (mind blown)
            
            std::cout << "Total Physical Memory: " << memInfo.ullTotalPhys << " bytes" << std::endl;
            std::cout << "Available Physical Memory: " << memInfo.ullAvailPhys << " bytes" << std::endl;
        } else if (command == "explore") {
            system("call explorer.bat");
        } else if (command == "exit") {
            // Shutdown Script
            std::cout << "Shutting Down.\n";
            Sleep(2000);  
            break;
        } else {
            // If the user experiences a skill issue and inputs the wrong command the code prints this
            std::cout << "Command not recognized. Type 'help' for a list of commands.\n";
        }
    }

    return 0;
}
