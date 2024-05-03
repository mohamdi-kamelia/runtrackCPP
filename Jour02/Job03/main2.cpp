#include <iostream>
using namespace std;

int main() {
    int i = 0, n, som = 0;

    cout << "Avec la boucle while : \n";
    while (i < 4) {
        cout << "donnez un entier : ";
        cin >> n;
        som += n;
        i++;
    }

    cout << " La Somme est : " << som << "\n\n";

    return 0;
}
