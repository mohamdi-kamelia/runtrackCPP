#include <iostream>

int main() {
    char operation;
    double nombre1, nombre2, resultat;

    std::cout << "Choisissez une operation parmi les suivantes : +, -, *, / : ";
    std::cin >> operation;

    std::cout << "Entrez le premier nombre : ";
    std::cin >> nombre1;

    std::cout << "Entrez le deuxieme nombre : ";
    std::cin >> nombre2;


    switch (operation) {
        case '+':
            resultat = nombre1 + nombre2;
            break;
        case '-':
            resultat = nombre1 - nombre2;
            break;
        case '*':
            resultat = nombre1 * nombre2;
            break;
        case '/':
            if (nombre2 != 0) {
                resultat = nombre1 / nombre2;
            } else {
                std::cout << "Erreur : division par zero !" << std::endl;
                return 1; 
            }
            break;
        default:
            std::cout << "Operation invalide !" << std::endl;
            return 1; 
    }


    std::cout << "Le resultat de l'operation est : " << resultat << std::endl;

    return 0;
}
