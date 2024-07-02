#include <iostream>
#include <cstdlib> // Pour la fonction rand() et srand()
#include <ctime>   // Pour la fonction time()

using namespace std;

int main() {
    // Initialisation de la graine pour la génération de nombres aléatoires
    srand(time(0));

    // Génération du nombre mystère entre 0 et 100
    int nombreMystere = rand() % 101;

    // Nombre de chances du joueur
    int nbChances = 5;

    // Message d'accueil
    cout << "Bienvenue dans le jeu du Nombre Mystere !" << endl;
    cout << "Devinez le nombre mystere entre 0 et 100." << endl;
    cout << "Vous avez " << nbChances << " chances." << endl;

    // Boucle de jeu
    while (nbChances > 0) {
        // Demande au joueur de deviner le nombre
        int nombreJoueur;
        cout << "Entrez votre proposition : ";
        cin >> nombreJoueur;

        // Vérifie si la proposition du joueur est correcte
        if (nombreJoueur == nombreMystere) {
            cout << "Bravo ! Vous avez trouvé le nombre mystere." << endl;
            return 0; // Fin du jeu
        } else if (nombreJoueur < nombreMystere) {
            cout << "Trop petit !" << endl;
        } else {
            cout << "Trop grand !" << endl;
        }

        // Diminue le nombre de chances
        nbChances--;
        cout << "Il vous reste " << nbChances << " chances." << endl;
    }

    // Si le joueur n'a pas trouvé le nombre mystère
    cout << "Désolé, vous avez épuisé toutes vos chances." << endl;
    cout << "Le nombre mystere était : " << nombreMystere << endl;

    return 0;
}