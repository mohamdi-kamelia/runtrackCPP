#include <iostream>
#include <string>
#include <vector>

// Structure pour stocker les informations sur une destination depuis Marseille
struct Destination {
    std::string nom;
    int tempsDeVol;
};

int main() {
    std::vector<Destination*> destinations; // Vecteur pour stocker les pointeurs vers les destinations

    // Demander à l'utilisateur de saisir les destinations et les temps de vol depuis Marseille
    char reponse;
    do {
        Destination* nouvelleDestination = new Destination(); // Création d'une nouvelle destination dynamique

        std::cout << "Nom de la destination : ";
        std::cin >> nouvelleDestination->nom;
        std::cout << "Temps de vol depuis Marseille (en heures) : ";
        std::cin >> nouvelleDestination->tempsDeVol;

        destinations.push_back(nouvelleDestination); // Ajout du pointeur vers la nouvelle destination au vecteur

        std::cout << "Voulez-vous ajouter une autre destination ? (o/n) : ";
        std::cin >> reponse;
    } while (reponse == 'o' || reponse == 'O');

    // Parcourir le conteneur et afficher les données de chaque destination
    std::cout << "\nInformations sur les destinations :" << std::endl;
    for (size_t i = 0; i < destinations.size(); ++i) {
        std::cout << "Destination " << i + 1 << ":" << std::endl;
        std::cout << "Nom : " << destinations[i]->nom << std::endl;
        std::cout << "Temps de vol depuis Marseille : " << destinations[i]->tempsDeVol << " heures" << std::endl;
    }

    // Modification des données de chaque destination
    for (size_t i = 0; i < destinations.size(); ++i) {
        std::cout << "\nModification des données de la destination " << i + 1 << ":" << std::endl;
        std::cout << "Nouveau nom : ";
        std::cin >> destinations[i]->nom;
        std::cout << "Nouveau temps de vol depuis Marseille (en heures) : ";
        std::cin >> destinations[i]->tempsDeVol;
    }

    // Libération de la mémoire allouée pour chaque destination dynamique
    for (size_t i = 0; i < destinations.size(); ++i) {
        delete destinations[i];
    }

    return 0;
}