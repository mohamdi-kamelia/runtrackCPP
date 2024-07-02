#include <iostream>
#include <cstring> // pour strlen

void reverseString(char* str) {
    if (str == nullptr) return;

    char* start = str;
    char* end = str + strlen(str) - 1;

    while (start < end) {
        // Échanger les caractères pointés par start et end
        char temp = *start;
        *start = *end;
        *end = temp;

        // Avancer le pointeur start et reculer le pointeur end
        ++start;
        --end;
    }
}

int main() {
    // Lecture de la chaîne de caractères
    std::cout << "Entrez une chaîne de caracteres : ";
    char input[100]; // On suppose que la chaîne de caractères ne dépasse pas 100 caractères
    std::cin.getline(input, 100);

    // Inverser la chaîne de caractères
    reverseString(input);

    // Afficher la chaîne inversée
    std::cout << "Chaine inversee : " << input << std::endl;

    return 0;
}