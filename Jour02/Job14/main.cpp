#include <iostream>
#include <cmath>

// Fonction pour calculer le nombre de chiffres dans un nombre
int nombreDeChiffres(int nombre) {
    int compteur = 0;
    while (nombre != 0) {
        nombre /= 10;
        ++compteur;
    }
    return compteur;
}

// Fonction pour vérifier si un nombre est un nombre narcissique
bool estNarcissique(int nombre) {
    int temp = nombre;
    int somme = 0;
    int puissance = nombreDeChiffres(nombre);
    
    while (temp != 0) {
        int chiffre = temp % 10;
        somme += pow(chiffre, puissance);
        temp /= 10;
    }

    return somme == nombre;
}

int main() {
    int nombre;
    std::cout << "Entrez un nombre : ";
    std::cin >> nombre;

    if (estNarcissique(nombre)) {
        std::cout << nombre << " est un nombre narcissique." << std::endl;
    } else {
        std::cout << nombre << " n'est pas un nombre narcissique." << std::endl;
    }

    return 0;
}
