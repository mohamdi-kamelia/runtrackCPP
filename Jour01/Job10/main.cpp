#include <iostream>

int main() {
    double prixHTKiloCarottes, nombreKilos, tauxTVA;

    // Demander à l'utilisateur de saisir le prix HT d'un kilo de carottes
    std::cout << "Entrez le prix HT d'un kilo de carottes : ";
    std::cin >> prixHTKiloCarottes;

    // Demander à l'utilisateur de saisir le nombre de kilos de carottes
    std::cout << "Entrez le nombre de kilos de carottes : ";
    std::cin >> nombreKilos;

    // Demander à l'utilisateur de saisir le taux de TVA
    std::cout << "Entrez le taux de TVA en pourcentage (ex: 15 pour 15%) : ";
    std::cin >> tauxTVA;

    // Calcul du prix TTC
    double prixTTC = (prixHTKiloCarottes * nombreKilos) * (1 + tauxTVA / 100.0);

    // Afficher le prix TTC
    std::cout << "Le prix TTC des carottes est de : " << prixTTC << " euros" << std::endl;

    return 0;
}
