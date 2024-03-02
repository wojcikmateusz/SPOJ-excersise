#include <iostream>

using namespace std;


int silnia(int n) {
    int wynik = 1;

    for (int i = 1; i <= n; ++i) {
        wynik *= i;
    }

    return wynik;
}

clock_t start, stop;
double czas;
int main()
{
    int D=1;
    cin>>D;
    int n;

    if(D<=30)
    {
        for(int i =1; i<=D;i++)
        {
            cin>>n;
            start = clock();
            int dziesiatki = silnia(n)/10;
            int jednosci = silnia(n) % 10;

            cout<<dziesiatki<<" "<<jednosci<<endl;
            stop = clock();
            czas = (double)(stop - start) / CLOCKS_PER_SEC;
            cout<<czas;
        }
    }
    else{exit(0);}
}

