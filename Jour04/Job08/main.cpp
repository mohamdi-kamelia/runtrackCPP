#include <iostream>

int main() {
    // Initialisation d'un tableau avec des valeurs de différents types
    const int annee = 2019;
    const char plateforme[] = "La Plateforme"; // Utilisation d'un tableau de caractères pour stocker la chaîne
    const float pi = 3.14;
    const char etudiants[] = "Étudiants"; // Utilisation d'un tableau de caractères pour stocker la chaîne

    // Tableau de pointeurs vers des constantes de type void* pour stocker les adresses des éléments
    const void* tableau[] = {&annee, plateforme, &pi, etudiants};

    // Affichage des adresses et des valeurs de chaque élément du tableau
    std::cout << "Adresse et valeur de chaque element du tableau :\n";
    for (size_t i = 0; i < sizeof(tableau) / sizeof(tableau[0]); ++i) {
        std::cout << "Adresse de l'element " << i << " : " << tableau[i] << ", Valeur : ";
        // Utilisation de la déréférenciation de type pour obtenir la valeur de chaque élément
        if (i == 0) {
            std::cout << *(const int*)tableau[i]; // Conversion du pointeur en pointeur vers un entier puis déréférencement
        } else if (i == 2) {
            std::cout << *(const float*)tableau[i]; // Conversion du pointeur en pointeur vers un flottant puis déréférencement
        } else {
            std::cout << *(const char**)tableau[i]; // Conversion du pointeur en pointeur vers un pointeur de caractère puis déréférencement
        }
        std::cout << std::endl;
    }

    return 0;
}

