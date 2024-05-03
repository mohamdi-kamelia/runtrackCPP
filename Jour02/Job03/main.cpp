#include <iostream>
using namespace std;

int main() {
    int i = 0, n, som = 0;

    cout << "Avec la boucle do...while : \n";
    do {
        cout << "donnez un entier : ";
        cin >> n;
        som += n;
        i++;
    } while (i < 4);

    cout << "Somme: " << som << "\n\n";

    return 0;
}
