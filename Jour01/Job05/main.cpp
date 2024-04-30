#include <iostream>

int main() {
    // Déclaration des variables pour stocker les nombres à multiplier
    int nombre1, nombre2;

    // Demander à l'utilisateur d'entrer les deux nombres
    std::cout << "Entrez le premier nombre : ";
    std::cin >> nombre1;

    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> nombre2;

    // Calcul du produit
    int produit = nombre1 * nombre2;

    // Affichage du résultat
    std::cout << "Le produit de " << nombre1 << " et " << nombre2 << " est : " << produit << std::endl;

    return 0;
}
