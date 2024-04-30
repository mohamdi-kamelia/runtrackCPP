#include <iostream>

int main() {
    int nombre1, nombre2, nombre3;

    // Demander à l'utilisateur d'entrer trois entiers
    std::cout << "Entrez le premier entier : ";
    std::cin >> nombre1;

    std::cout << "Entrez le deuxième entier : ";
    std::cin >> nombre2;

    std::cout << "Entrez le troisième entier : ";
    std::cin >> nombre3;

    // Comparer les nombres pour trouver le plus grand
    int plusGrand = nombre1;

    if (nombre2 > plusGrand) {
        plusGrand = nombre2;
    }

    if (nombre3 > plusGrand) {
        plusGrand = nombre3;
    }

    // Afficher le résultat
    std::cout << "Le plus grand des trois entiers est : " << plusGrand << std::endl;

    return 0;
}
