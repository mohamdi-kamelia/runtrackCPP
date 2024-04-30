#include <iostream>

int main() {
    int annee;

    // Demander à l'utilisateur d'entrer une année
    std::cout << "Entrez une annee : ";
    std::cin >> annee;

    // Vérifier si l'année est bissextile
    bool estBissextile = false;

    // Une année est bissextile si elle est divisible par 4
    if (annee % 4 == 0) {
        // Sauf si elle est également divisible par 100, auquel cas elle n'est bissextile que si elle est divisible par 400
        if (annee % 100 != 0 || annee % 400 == 0) {
            estBissextile = true;
        }
    }

    // Afficher le résultat
    if (estBissextile) {
        std::cout << annee << " est une annee bissextile." << std::endl;
    } else {
        std::cout << annee << " n'est pas une annee bissextile." << std::endl;
    }

    return 0;
}
