#include <iostream>


unsigned long long factorielle(int n) {

    if (n == 0) {
        return 1;
    }
    
    return n * factorielle(n - 1);
}

int main() {
    int nombre;
    std::cout << "Entrez un nombre entier pour calculer sa factorielle : ";
    std::cin >> nombre;

    
    if (nombre < 0) {
        std::cout << "La factorielle d'un nombre négatif n'est pas définie." << std::endl;
    } else {
        
        unsigned long long resultat = factorielle(nombre);
        std::cout << "La factorielle de " << nombre << " est : " << resultat << std::endl;
    }

    return 0;
}
