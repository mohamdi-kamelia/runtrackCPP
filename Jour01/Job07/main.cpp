#include <iostream>

int main() {
    int nombre;

    // Demander à l'utilisateur d'entrer un nombre entier
    std::cout << "Entrez un nombre entier : ";
    std::cin >> nombre;

    // Vérifier si le nombre est pair ou impair
    if (nombre % 2 == 0) {
        std::cout << nombre << " est un nombre pair." << std::endl;
    } else {
        std::cout << nombre << " est un nombre impair." << std::endl;
    }

    return 0;
}
