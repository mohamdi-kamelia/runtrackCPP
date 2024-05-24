#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Fonction pour vérifier si une chaîne est un palindrome
bool estPalindrome(const string& str) {
    int debut = 0;
    int fin = str.length() - 1;
    
    while (debut < fin) {
        if (str[debut] != str[fin]) {
            return false;
        }
        debut++;
        fin--;
    }
    return true;
}

int main() {
    // Tableau de chaînes
    vector<string> tab = {"radar", "hello", "lvel", "stats", "world"};

    // Recherche des palindromes
    cout << "Palindromes trouvés :" << endl;
    for (const string& mot : tab) {
        if (estPalindrome(mot)) {
            cout << mot << endl;
        }
    }

    return 0;
}