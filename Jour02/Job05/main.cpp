#include <iostream>

int main() {
    double note;

    std::cout << "Entrez la note (entre 0 et 20) : ";
    std::cin >> note;

    if (note >= 0 && note <= 20) {
        
        if (note > 10) {
            std::cout << "Valide" << std::endl;
        } else {
            std::cout << "Non valide" << std::endl;
        }
    } else {
        std::cout << "La note  n'est pas valide ." << std::endl;
    }

    return 0;
}
