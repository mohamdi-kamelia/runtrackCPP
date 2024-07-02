#include <iostream>

int main() {
    int number = 2019;
    int *ptr = &number; // Déclaration d'un pointeur pointant vers la variable 'number'

    // Affichage de la valeur de 'number' à l'aide du pointeur
    std::cout << "La valeur de 'number' est : " << *ptr << std::endl;

    return 0;
}