#include <iostream>
#include <string>

int main() {
    // Initialisation du tableau de fruits
    std::string fruits[] = {"Pomme", "Banane", "Orange", "Fraise", "Ananas"};
    const int tailleFruits = 5;

    // Affichage du contenu du tableau de fruits
    std::cout << "Contenu du tableau de fruits :" << std::endl;
    for (int i = 0; i < tailleFruits; ++i) {
        std::cout << i + 1 << ". " << fruits[i] << std::endl;
    }

    // Demander le nombre de fruits préférés de l'utilisateur
    int tailleFavoris;
    std::cout << "Entrez le nombre de fruits favoris que vous avez : ";
    std::cin >> tailleFavoris;

    // Création dynamique du tableau "favoris"
    std::string* favoris = new std::string[tailleFavoris];

    // Demander à l'utilisateur d'entrer ses fruits favoris
    std::cout << "Entrez vos " << tailleFavoris << " fruits favoris :" << std::endl;
    for (int i = 0; i < tailleFavoris; ++i) {
        std::cout << "Fruit " << i + 1 << " : ";
        std::cin >> favoris[i];
    }

    // Affichage du tableau "favoris"
    std::cout << "Contenu du tableau favoris :" << std::endl;
    for (int i = 0; i < tailleFavoris; ++i) {
        std::cout << i + 1 << ". " << favoris[i] << std::endl;
    }

    // Libération de la mémoire allouée dynamiquement pour le tableau "favoris"
    delete[] favoris;

    return 0;
}