#include <iostream>
#include <cmath>

using namespace std;

int test, obz, ilosc_c, t_jedz, czas = 86400, suma;
double pudelka;

int main() 
{
    cin >> test;

    for (int i = 0; i < test; i++) 
    {
        cin >> obz >> ilosc_c;
        suma = 0;

        for (int j = 0; j < obz; j++) 
        {
            cin >> t_jedz;
            suma += czas / t_jedz;
            
        }

      pudelka = static_cast<double>(suma)/ilosc_c;
      double zaok = ceil(pudelka);
      cout<<zaok<<endl;

    }

    
}