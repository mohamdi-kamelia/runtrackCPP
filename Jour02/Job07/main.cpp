#include <iostream>

int main() {
    int a, b;

    // Demander à l'utilisateur de saisir les entiers a et b
    std::cout << "Entrez un entier a : ";
    std::cin >> a;

    std::cout << "Entrez un entier b (il faut qu'il > a) : ";
    std::cin >> b;

    // Afficher les entiers de a à b (bornes incluses)
    std::cout << "Les entiers de " << a << " a " << b << " sont : ";
    for (int i = a; i <= b; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
