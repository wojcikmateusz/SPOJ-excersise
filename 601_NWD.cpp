#include <iostream>

using namespace std;



int nwd(int a, int b)
{
    while(b!=0)//alorytm euklidesa
    {
        int m = b;
        b = a % b;
        a = m;
    }
    return a;
}


int main()
{
   
    int t;
    cin>>t;

    for(int i=0; i<t;i++)
    {
        int l1=0,l2=0;
        cin>>l1>>l2;

        if(0<=l1 && l2<=1000000)
        {
        int f=nwd(l1,l2);
        cout<<f<<endl;
        }
        else{exit(0);}
    }
}
