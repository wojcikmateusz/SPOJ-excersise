#include <iostream>


using namespace std;


int main()
{
    int t;
    cin>>t;

    if(t<100)
    {
        for (int i=0;i<t;i++)
        {
            
            int n,suma=0;
            cin>>n;

            for(int k =0;k<n;k++)
            {
            int l=0;
            cin>>l;
            suma += l;
            }
            
            cout<<suma<<endl;
        }
    }
    else{exit(0);}
}