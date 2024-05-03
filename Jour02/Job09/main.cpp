#include <iostream>

int main() {
    int a, b, c;

    std::cout << "Entrez un nombre entier a : ";
    std::cin >> a;

    std::cout << "Entrez un nombre entier b (a < b) : ";
    std::cin >> b;

    std::cout << "Entrez un nombre entier c : ";
    std::cin >> c;

    if (a < b) {
        if (c >= a && c <= b) {
            std::cout << "GAGNE" << std::endl;
        } else {
            std::cout << "PERDU" << std::endl;
        }
    } else {
        std::cout << "Erreur : a doit être strictement inférieur à b !" << std::endl;
        return 1;
    }

    return 0;
}
