#include <iostream>

int main(){
    int a, b;

    // Demander à l'utilisateur de saisir les entiers a et b
    std::cout << "Entrez un entier a : ";
    std::cin >> a;

    std::cout << "Entrez un entier b (il faut qu'il > a) : ";
    std::cin >> b;

    // Afficher les entiers de a à b (bornes incluses)
    std::cout << "Les entiers de " << a << " a " << b << " sont : ";
    int i = a;
    while (i <= b) {
        std::cout << i << " ";
        i++;
    }
    std::cout << std::endl;

    return 0;
}

    
