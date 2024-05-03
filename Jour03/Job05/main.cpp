#include <iostream>
#include <string>
#include <regex>

int main() {
    std::string heure;
    
    // Demander à l'utilisateur de saisir une heure
    std::cout << "Veuillez entrer une heure au format XXhXX : ";
    std::cin >> heure;
    
    // Définir le motif de la regex pour vérifier le format de l'heure
    std::regex motif("([0-1]?[0-9]|2[0-3])h[0-5]?[0-9]");
    
    // Vérifier si l'heure correspond au motif
    if (std::regex_match(heure, motif)) {
        std::cout << "L'heure est au bon format." << std::endl;
    } else {
        std::cout << "L'heure n'est pas au bon format." << std::endl;
    }
    
    return 0;
}
