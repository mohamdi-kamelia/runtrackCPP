#include <iostream>

int main() {
    int N;

    // Demander à l'utilisateur d'entrer la valeur de N
    std::cout << "Entrez la valeur de N : ";
    std::cin >> N;

    // Vérifier si N est supérieur à 0
    while (N > 0) {
        // Afficher "Hello World"
        std::cout << "Hello World" << std::endl;
        // Décrémenter N
        N--;
    }

    return 0;
}
