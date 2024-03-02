#include <iostream>
#include<ctime>
using namespace std;

clock_t start, stop;
double czas;


int main() {
    int D;
    cin >> D;

    for (int i = 0; i<D; ++i) 
    {
        int p=0,w=0;
        cin >>p>>w;
        
        long int wynik = 1;

        while (w > 0) 
            {
              wynik = wynik * p;
                w--;
            }
        
            int jednosci = wynik % 10;
            cout <<jednosci <<endl;
        
    }
}
