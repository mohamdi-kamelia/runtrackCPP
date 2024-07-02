#include <iostream>

int main() {
    int taille;

    // Demander à l'utilisateur de saisir la taille du tableau
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> taille;

    // Créer un tableau dynamique d'entiers de taille définie par l'utilisateur
    int* tableau = new int[taille];

    // Demander à l'utilisateur de saisir les valeurs pour chaque élément du tableau
    std::cout << "Entrez les valeurs pour chaque element du tableau :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cout << "Element " << i << " : ";
        std::cin >> tableau[i];
    }

    // Afficher le contenu du tableau
    std::cout << "Contenu du tableau :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cout << "Element " << i << " : " << tableau[i] << std::endl;
    }

    // Libérer la mémoire allouée pour le tableau dynamique
    delete[] tableau;

    return 0;
}