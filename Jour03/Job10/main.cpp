#include <iostream>
#include <string>

int main() {
    std::string str1, str2;

    // Demander à l'utilisateur de saisir une chaîne de caractères
    std::cout << "Entrez une chaine de caracteres : ";
    std::getline(std::cin, str1);

    // Initialiser la deuxième chaîne de caractères
    str2 = "Bonjour";

    // Trier les deux chaînes dans l'ordre lexicographique
    if (str1 < str2) {
        std::cout << "La chaine \"" << str1 << "\" vient avant la chaine \"" << str2 << "\" dans l'ordre lexicographique." << std::endl;
        std::cout << "La chaine \"" << str2 << "\" vient apres la chaine \"" << str1 << "\" dans l'ordre lexicographique." << std::endl;
    } else if (str1 > str2) {
        std::cout << "La chaine \"" << str2 << "\" vient avant la chaine \"" << str1 << "\" dans l'ordre lexicographique." << std::endl;
        std::cout << "La chaine \"" << str1 << "\" vient apres la chaine \"" << str2 << "\" dans l'ordre lexicographique." << std::endl;
    } else {
        std::cout << "Les deux chaines sont identiques." << std::endl;
    }

    return 0;
}