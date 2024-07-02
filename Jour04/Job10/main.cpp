#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

// Structure représentant une note d'étudiant
struct Note {
    std::string nom;
    std::string prenom;
    double note;
};

// Fonction pour ajouter une note à la liste
void ajouterNote(std::vector<Note>& listeNotes) {
    Note nouvelleNote;
    std::cout << "Nom de l'etudiant : ";
    std::cin >> nouvelleNote.nom;
    std::cout << "Prenom de l'etudiant : ";
    std::cin >> nouvelleNote.prenom;
    std::cout << "Note de l'etudiant : ";
    std::cin >> nouvelleNote.note;
    listeNotes.push_back(nouvelleNote);
    std::cout << "Note ajoutee avec succes." << std::endl;
}

// Fonction pour afficher la liste des notes
void afficherListeNotes(const std::vector<Note>& listeNotes) {
    std::cout << "Liste des notes :" << std::endl;
    std::cout << std::setw(15) << "Nom" << std::setw(15) << "Prenom" << std::setw(10) << "Note" << std::endl;
    for (const auto& note : listeNotes) {
        std::cout << std::setw(15) << note.nom << std::setw(15) << note.prenom << std::setw(10) << note.note << std::endl;
    }
}

// Fonction pour supprimer une note d'un étudiant
void supprimerNote(std::vector<Note>& listeNotes) {
    std::string nom, prenom;
    std::cout << "Nom de l'etudiant dont vous voulez supprimer la note : ";
    std::cin >> nom;
    std::cout << "Prenom de l'etudiant : ";
    std::cin >> prenom;
    for (auto it = listeNotes.begin(); it != listeNotes.end(); ++it) {
        if (it->nom == nom && it->prenom == prenom) {
            listeNotes.erase(it);
            std::cout << "Note de l'etudiant supprimee avec succes." << std::endl;
            return;
        }
    }
    std::cout << "Aucune note trouvee pour cet etudiant." << std::endl;
}

// Fonction pour calculer et afficher la moyenne des notes
void afficherMoyenne(const std::vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        std::cout << "Aucune note dans la liste." << std::endl;
        return;
    }
    double somme = 0.0;
    for (const auto& note : listeNotes) {
        somme += note.note;
    }
    double moyenne = somme / listeNotes.size();
    std::cout << "La moyenne des notes est : " << moyenne << std::endl;
}

int main() {
    std::vector<Note> listeNotes;
    int choix;

    do {
        // Affichage du menu
        std::cout << "\nMenu :" << std::endl;
        std::cout << "1. Ajouter une note" << std::endl;
        std::cout << "2. Afficher la liste des notes" << std::endl;
        std::cout << "3. Supprimer une note d'un etudiant" << std::endl;
        std::cout << "4. Afficher la moyenne des notes" << std::endl;
        std::cout << "5. Quitter" << std::endl;
        std::cout << "Votre choix : ";
        std::cin >> choix;

        // Exécuter l'action correspondant au choix de l'utilisateur
        switch (choix) {
            case 1:
                ajouterNote(listeNotes);
                break;
            case 2:
                afficherListeNotes(listeNotes);
                break;
            case 3:
                supprimerNote(listeNotes);
                break;
            case 4:
                afficherMoyenne(listeNotes);
                break;
            case 5:
                std::cout << "Programme termine." << std::endl;
                break;
            default:
                std::cout << "Choix invalide. Veuillez reessayer." << std::endl;
        }
    } while (choix != 5);

    return 0;
}