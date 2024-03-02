#include <iostream>

using namespace std;

int main() 
{

int n;
cin>>n;

    if(n<=20 || n==1)
    {
        int suma,wynik;
         int max;

        for(int i=1;i<=n;i++)
        {
            int a,b;
            cin>>a>>b;

            if(10<=a && b<=30)
            {
                suma=a+b;
            
                int wieksza;
                if(a>b) wieksza = a;
                else wieksza = b;
               
                if(wieksza>max) max= wieksza; 
            }
            else{exit(0);}

            wynik= wynik+ suma;   
        }
            cout<<wynik<<endl;
            cout<<max;
    }
    else{exit(0);}
}
