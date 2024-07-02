#include <iostream>

int main() {
    int tableau[] = {1, 2, 3, 4, 5}; // Déclaration et initialisation du tableau

    // Affichage des valeurs du tableau à l'aide de références et d'une boucle
    std::cout << "Valeurs du tableau :" << std::endl;
    for (int& valeur : tableau) {
        std::cout << valeur << " ";
    }
    std::cout << std::endl;

    return 0;
}