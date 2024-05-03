#include <iostream>
#include <string>

#ifdef _WIN32
    #include <windows.h> 
#else
    #include <unistd.h>
#endif

// Fonction pour mettre en majuscules une chaîne de caractères
std::string toUpper(const std::string& str) {
    std::string result = str;
    for (char& c : result) {
        c = std::toupper(c);
    }
    return result;
}

void printRed(const std::string& str) {
    #ifdef _WIN32
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    #else
        std::cout << "\033[1;31m";
    #endif
    std::cout << str;
    #ifdef _WIN32
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    #else
        std::cout << "\033[0m"; 
    #endif
}

int main() {
    std::string phrase = "vive la plateforme !";
    std::string majuscules = toUpper(phrase);

    printRed(majuscules);

    return 0;
}
