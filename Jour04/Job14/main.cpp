#include <iostream>

int main() {
    int x = 12; // Déclaration et initialisation de la variable x avec l'entier 12

    std::cout << "Valeur initiale de x : " << x << std::endl;

    int& referenceX = x; // Déclaration d'une référence vers x

    // Modification de la valeur de x à travers la référence
    referenceX = 24;

    std::cout << "Nouvelle valeur de x après modification : " << x << std::endl;

    return 0;
}
 