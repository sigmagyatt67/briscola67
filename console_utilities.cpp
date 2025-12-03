#include <iostream>
#include <cstdlib> // per system()
#include <windows.h> // per colori e Sleep
using namespace std;
int main() {
    std::cout << "Questo testo sarà cancellato..." << std::endl;
   /* cout << "Inserisci testo"<<endl;
    int a;
    cin >> a;*/
    system("CLS"); // Comando per Windows
    std::cout << "Console pulita!" << std::endl;
    
     // Ottieni handle della console
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    // Testo rosso
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    std::cout << "Testo in rosso brillante" << std::endl;

    Sleep(1000); // Delay di 1 secondo

    // Testo verde
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Testo in verde brillante" << std::endl;

    Sleep(1000);
    
    system("CLS");

    // Testo giallo (rosso + verde)
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    std::cout << "Testo in giallo brillante" << std::endl;

    Sleep(1000);

    // Ripristina colore standard (bianco su nero)
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cout << "Colore ripristinato" << std::endl;
    return 0;
}

