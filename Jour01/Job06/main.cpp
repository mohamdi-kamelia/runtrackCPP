#include <iostream>

int main() {
    int nombre;

    // Demander à l'utilisateur d'entrer un entier
    std::cout << "Entrez un entier pour afficher sa table de multiplication : ";
    std::cin >> nombre;

    // Afficher la table de multiplication
    std::cout << "Table de multiplication de " << nombre << " :\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << nombre << " * " << i << " = " << (nombre * i) << std::endl;
    }

    return 0;
}
