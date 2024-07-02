#include <iostream>
#include <string>
#include <vector>

// Déclaration de la structure Staff
struct Staff {
    std::string nom;
    std::string prenom;
};

int main() {
    // Déclaration et initialisation des membres du staff
    Staff alicia = {"Cordial", "Alicia"};
    Staff pierre = {"Malardier", "Pierre"};

    // Affichage des prénoms des membres du staff
    std::cout << "Prénoms des membres du staff :" << std::endl;
    std::cout << alicia.prenom << std::endl;
    std::cout << pierre.prenom << std::endl;

    // Déclaration de la structure Etudiant
    struct Etudiant {
        std::string nom;
        std::string prenom;
    };

    // Demander à l'utilisateur de saisir le nombre d'étudiants
    int nombreEtudiants;
    std::cout << "Entrez le nombre d'étudiants : ";
    std::cin >> nombreEtudiants;

    // Création d'un vecteur d'étudiants pour stocker les informations saisies par l'utilisateur
    std::vector<Etudiant> listeEtudiants(nombreEtudiants);

    // Saisie des noms et prénoms des étudiants par l'utilisateur
    std::cout << "Entrez les noms et prénoms des étudiants :" << std::endl;
    for (int i = 0; i < nombreEtudiants; ++i) {
        std::cout << "Etudiant " << i + 1 << " :" << std::endl;
        std::cout << "Nom : ";
        std::cin >> listeEtudiants[i].nom;
        std::cout << "Prénom : ";
        std::cin >> listeEtudiants[i].prenom;
    }

    // Affichage des prénoms des étudiants
    std::cout << "Prénoms des étudiants :" << std::endl;
    for (const auto& etudiant : listeEtudiants) {
        std::cout << etudiant.prenom << std::endl;
    }

    return 0;
}