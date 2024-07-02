#include <iostream>

int main() {
    // Déclaration et initialisation des variables
    int entier = 17;
    float flottant = 3.14;
    double reel = 123.345;
    const char* caractere = "La Plateforme"; // Utilisation d'un pointeur de caractère pour stocker une chaîne de caractères

    // Affichage des adresses mémoire et des valeurs des variables
    std::cout << "Adresse de la variable entier : " << &entier << ", Valeur : " << entier << std::endl;
    std::cout << "Adresse de la variable flottant : " << &flottant << ", Valeur : " << flottant << std::endl;
    std::cout << "Adresse de la variable reel : " << &reel << ", Valeur : " << reel << std::endl;
    std::cout << "Adresse de la variable caractere : " << (void*)&caractere << ", Valeur : " << caractere << std::endl;

    return 0;
}