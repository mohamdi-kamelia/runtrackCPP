#include <iostream>

int main() {
    const int taille = 10;
    int T[taille];
    int count = 0;

    // Demander à l'utilisateur de saisir 10 entiers et les stocker dans le tableau T
    std::cout << "Entrez 10 entiers : ";
    for (int i = 0; i < taille; ++i) {
        std::cin >> T[i];
    }

    // Compter le nombre d'entiers supérieurs ou égaux à 5
    for (int i = 0; i < taille; ++i) {
        if (T[i] >= 5) {
            count++;
        }
    }

    // Afficher le nombre d'entiers supérieurs ou égaux à 5
    std::cout << "Nombre d'entiers supErieurs ou Egaux à 5 : " << count << std::endl;

    return 0;
}