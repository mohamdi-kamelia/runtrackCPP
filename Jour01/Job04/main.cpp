#include <iostream>

int main() {
    // Déclaration des variables pour stocker les nombres à additionner
    int nombre1, nombre2;

    // Demander à l'utilisateur d'entrer les deux nombres
    std::cout << "Entrez le premier nombre : ";
    std::cin >> nombre1;

    std::cout << "Entrez le deuxieme nombre : ";
    std::cin >> nombre2;

    // Calcul de la somme
    int somme = nombre1 + nombre2;

    // Affichage du résultat
    std::cout << "La somme de " << nombre1 << " et " << nombre2 << " est : " << somme << std::endl;

    return 0;
}
