#include <iostream>

using namespace std;

int testy,liczby=0;


int main()
{
    cin>>testy;
    if(testy<100000)
    {
        for(int i =1; i<=testy;i++)
        {
            cin>>liczby;
            int j = 1;
            int r = 0;
            int t = 0;
            while(t<liczby)
            {
                r = liczby%j;
                if((j!=1) && (j!=liczby) && (r == 0) ||(liczby==1))
                {
                cout <<"NIE"<<endl;
                t=liczby;
                }
                else if((j == liczby )&& (r== 0))
                {
                cout <<"TAK"<<endl;
                t= liczby;
                }
        
                j++;
            }
           
        }
    }
    else
    {
    exit(0);
    }
}