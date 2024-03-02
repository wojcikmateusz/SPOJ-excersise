#include <iostream>
#include <string>

using namespace std;

int main() {
    int D;
    cin >> D;

    if (1 <= D && D <= 50) {
        for (int i = 0; i < D; i++) {
            string t;
            cin >> t;

            int dlugosc = t.length();
            if (dlugosc <= 200) {
                string wynik;
                int k = 0;

                while (k < dlugosc) {
                    char aktualnyznak = t[k];
                    int iloscpowt = 1;

                    while (k + 1 < dlugosc && t[k + 1] == aktualnyznak) {
                        iloscpowt++;
                        k++;
                    }

                    if (iloscpowt >= 3) {
                        wynik += aktualnyznak + to_string(iloscpowt);
                    } else {
                        for (int j = 0; j < iloscpowt; j++) {
                            wynik += aktualnyznak;
                        }
                    }

                    k++;
                }

                cout << wynik << endl;
            } else {
                exit(0);
            }
        }
    } else {
        exit(0);
    }

    return 0;
}
