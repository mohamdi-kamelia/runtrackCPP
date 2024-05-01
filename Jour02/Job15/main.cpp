#include <iostream>

// Fonction pour générer la suite de Fibonacci jusqu'à une limite donnée
void fibonacci(int limite) {
    int terme1 = 0, terme2 = 1, termeSuivant;
    std::cout << "Suite de Fibonacci jusqu'a la limite " << limite << " :" << std::endl;
    std::cout << terme1 << ", " << terme2 << ", ";

    termeSuivant = terme1 + terme2;
    while (termeSuivant <= limite) {
        std::cout << termeSuivant << ", ";
        terme1 = terme2;
        terme2 = termeSuivant;
        termeSuivant = terme1 + terme2;
    }
    std::cout << std::endl;
}

int main() {
    int limite;
    std::cout << "Entrez la limite pour la suite de Fibonacci : ";
    std::cin >> limite;

    fibonacci(limite);

    return 0;
}
