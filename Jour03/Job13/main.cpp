#include <iostream>
#include <vector>

using namespace std;

// Fonction pour fusionner deux tableaux triés
vector<int> fusionnerTableaux(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> result;
    int i = 0, j = 0;

    // Parcourir les deux tableaux en les comparant
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        } else {
            result.push_back(arr2[j]);
            j++;
        }
    }

    // Ajouter les éléments restants du premier tableau
    while (i < arr1.size()) {
        result.push_back(arr1[i]);
        i++;
    }

    // Ajouter les éléments restants du deuxième tableau
    while (j < arr2.size()) {
        result.push_back(arr2[j]);
        j++;
    }

    return result;
}

int main() {
    // Tableaux d'entrée triés
    vector<int> arr1 = {1, 3, 5, 7, 9};
    vector<int> arr2 = {2, 4, 6, 8, 10};

    // Fusionner les tableaux
    vector<int> mergedArray = fusionnerTableaux(arr1, arr2);

    // Afficher le tableau fusionné
    cout << "Tableau fusionné :" << endl;
    for (int num : mergedArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}