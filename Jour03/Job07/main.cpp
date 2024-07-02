#include <iostream>

int main() {
    const int taille = 10;
    int T[taille];
    int maxIndex = 0;

    // Demander à l'utilisateur de saisir 10 entiers et les stocker dans le tableau T
    std::cout << "Entrez 10 entiers : ";
    for (int i = 0; i < taille; ++i) {
        std::cin >> T[i];
    }

    // Trouver l'indice du plus grand élément dans le tableau T
    for (int i = 1; i < taille; ++i) {
        if (T[i] > T[maxIndex]) {
            maxIndex = i;
        }
    }

    // Afficher l'indice du plus grand élément
    std::cout << "L'indice du plus grand Element est : " << maxIndex << std::endl;

    return 0;
}