#include <iostream>
#include <cstring>

bool estIncluse(const char* chaine1, const char* chaine2) {
    // Vérifier si l'une des chaînes est vide
    if (chaine1 == nullptr || chaine2 == nullptr) {
        return false;
    }

    // Obtenir les longueurs des chaînes
    int longueur1 = strlen(chaine1);
    int longueur2 = strlen(chaine2);

    // Si la longueur de la première chaîne est supérieure à celle de la deuxième, elle ne peut pas être incluse
    if (longueur1 > longueur2) {
        return false;
    }

    // Parcourir la deuxième chaîne pour rechercher la première
    for (int i = 0; i <= longueur2 - longueur1; ++i) {
        int j;
        // Vérifier si les caractères correspondent
        for (j = 0; j < longueur1; ++j) {
            if (chaine2[i + j] != chaine1[j]) {
                break; // Les caractères ne correspondent pas, passer au suivant dans la deuxième chaîne
            }
        }
        // Si tous les caractères correspondent, la première chaîne est incluse
        if (j == longueur1) {
            return true;
        }
    }

    // Si aucun correspondance n'est trouvée, la première chaîne n'est pas incluse
    return false;
}

int main() {
    const int taille_max = 100; // Taille maximale des chaînes de caractères
    char chaine1[taille_max];
    char chaine2[taille_max];

    // Demander à l'utilisateur de saisir les deux chaînes
    std::cout << "Entrez la premiere chaine : ";
    std::cin.getline(chaine1, taille_max);
    std::cout << "Entrez la deuxieme chaine : ";
    std::cin.getline(chaine2, taille_max);

    // Appeler la fonction et afficher le résultat
    if (estIncluse(chaine1, chaine2)) {
        std::cout << "La premiere chaine est incluse dans la deuxieme." << std::endl;
    } else {
        std::cout << "La premiere chaine n'est pas incluse dans la deuxieme." << std::endl;
    }

    return 0;
}