#include <iostream>
#include <string>

// Fonction pour supprimer les voyelles d'une chaîne de caractères
std::string supprimerVoyelles(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (!std::isalpha(c) || std::string("aeiouAEIOU").find(c) == std::string::npos) {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string phrase = "vive la plateforme !";
    std::string sansVoyelles = supprimerVoyelles(phrase);

    std::cout << "Chaine originale : " << phrase << std::endl;
    std::cout << "Chaine sans voyelles : " << sansVoyelles << std::endl;

    return 0;
}
