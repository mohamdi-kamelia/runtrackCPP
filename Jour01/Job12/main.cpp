#include <iostream>

int main (){
    int total = 0;
    int NombreEntier = 5;

    std :: cout<<"Entrez cinq entier :\n ";
     // Boucle pour lire les cinq entiers et les ajouter à la somme
    for (int i = 0; i < NombreEntier; ++i) {
        int entier;
        std::cout << "Entier " << i+1 << " : ";
        std::cin >> entier;
        total += entier;
    }

    // Calcul de la moyenne
    double moyenne = static_cast<double>(total) / NombreEntier;

    // Afficher la moyenne
    std::cout << "La moyenne des cinq entiers est : " << moyenne << std::endl;

    return 0;
}

