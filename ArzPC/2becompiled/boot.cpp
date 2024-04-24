#include <iostream>
#include <windows.h>

int main() {
    system("mode CON: COLS=120 LINES=30");
    system("cls");
    std::cout << "Booting up...\n";
    Sleep(2000);
    std::cout << "Initializing system components...\n";
    Sleep(3000);
    std::cout << "Loading drivers...\n";
    Sleep(2500);
    std::cout << "Starting services...\n";
    Sleep(2000);
    system("cls");
    system("call C:\\ArzPC\\C0M1\\cli.exe");
}
