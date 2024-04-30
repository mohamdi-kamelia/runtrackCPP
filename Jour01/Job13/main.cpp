#include <iostream>

int main() {
    int N;
    int somme = 0;

    // Demander à l'utilisateur de saisir un entier N
    std::cout << "Entrez un entier N : ";
    std::cin >> N;

    // Calculer la somme des cubes de 5^3 à N^3
    for (int i = 5; i <= N; ++i) {
        somme += i * i * i; 
    }

    // Afficher la somme
    std::cout << "La somme des cubes de 5^3 a N^3 est : " << somme << std::endl;

    return 0;
}
