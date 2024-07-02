#include <iostream>
#include <cstring>

int main() {
    const int taille_max = 100; // Taille maximale de la chaîne de caractères
    char tab[taille_max + 1]; // +1 pour inclure le caractère de fin de chaîne '\0'

    // Demander à l'utilisateur d'entrer une chaîne de caractères
    std::cout << "Entrez une chaine de caracteres : ";
    std::cin.getline(tab, taille_max);

    // Afficher la chaîne de caractères
    std::cout << "Vous avez saisi : " << tab << std::endl;

    // Afficher chaque caractère du tableau
    std::cout << "Les caracteres dans le tableau sont : ";
    for (int i = 0; tab[i] != '\0'; ++i) {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}