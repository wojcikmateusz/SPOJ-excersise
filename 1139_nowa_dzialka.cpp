#include <iostream>

using namespace std;


void pow(int d,int x)
{
   if(1<=d && d <= 500)
    {
        while(d--)
        {
            int x;
            cin>>x;

            int pow;
            pow=x*x;
            cout<<pow<<endl;
        }
    }
    else{exit(0);}   

}

int main()
{
    int d,x;
    cin>>d; 
    pow(d,x);
  
}