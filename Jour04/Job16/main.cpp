#include <iostream>

int trouverMax(int tableau[], int taille) {
    // Vérification du cas où le tableau est vide
    if (taille == 0) {
        std::cerr << "Erreur : Tableau vide." << std::endl;
        return -1; // Valeur par défaut si le tableau est vide
    }

    int max = tableau[0]; // Initialisation de la valeur maximale avec le premier élément du tableau

    // Parcours du tableau pour trouver la valeur maximale
    for (int i = 1; i < taille; ++i) {
        if (tableau[i] > max) {
            max = tableau[i]; // Mettre à jour la valeur maximale si une valeur plus grande est trouvée
        }
    }

    return max;
}

int main() {
    int tableau[] = {3, 7, 2, 9, 5}; // Tableau d'exemple
    int taille = sizeof(tableau) / sizeof(tableau[0]); // Calcul de la taille du tableau

    // Appel de la fonction pour trouver la valeur maximale
    int max = trouverMax(tableau, taille);

    // Affichage de la valeur maximale
    if (max != -1) {
        std::cout << "La valeur maximale dans le tableau est : " << max << std::endl;
    }

    return 0;
}
 