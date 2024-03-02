#include <iostream>

using namespace std;


bool czyPalindrom(int liczba) 
{
    int odwrocona = 0, kopia = liczba;

    while (kopia > 0) {
        int cyfra = kopia % 10;
        odwrocona = odwrocona * 10 + cyfra;
        kopia /= 10;
    }

    return (liczba == odwrocona);
}

int main() 
{
    int t;
    cin >> t;

    if (t <= 80) 
    {
        for (int i = 0; i < t; i++) 
        {
            int n;
            cin >> n;
            
            int prob = 0;
            int suma = n;

            while (!czyPalindrom(suma)) 
            {
                int odwrocona = 0, kopia = suma;

                while (kopia > 0) 
                {
                    int cyfra = kopia % 10;
                    odwrocona = odwrocona * 10 + cyfra;
                    kopia /= 10;
                }

                suma += odwrocona;
                prob++;
            }

            cout << suma << " " << prob <<endl;
        }
    }    
    else{exit(0);}
}
