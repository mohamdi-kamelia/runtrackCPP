#include <iostream>

// Fonction pour calculer la somme des éléments pairs d'un tableau
int sommeElementsPairs(int tableau[], int taille) {
    int somme = 0;

    // Parcourir le tableau et ajouter les éléments pairs à la somme
    for (int i = 0; i < taille; ++i) {
        if (tableau[i] % 2 == 0) {
            somme += tableau[i];
        }
    }

    return somme;
}

int main() {
    const int taille = 5; // Taille du tableau
    int tableau[taille];

    // Demander à l'utilisateur de saisir les éléments du tableau
    std::cout << "Entrez " << taille << " entiers pour remplir le tableau :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cout << "Element " << i + 1 << " : ";
        std::cin >> tableau[i];
    }

    // Calculer et afficher la somme des éléments pairs du tableau
    int sommePairs = sommeElementsPairs(tableau, taille);
    std::cout << "La somme des elements pairs du tableau est : " << sommePairs << std::endl;

    return 0;
}