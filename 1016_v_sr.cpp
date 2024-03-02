#include <iostream>


using namespace std;

void vsr(int v1, int v2)
{

    int wzor;
    wzor=(2*v1*v2)/(v1+v2);
    cout<<wzor<<endl;

}



int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int v1,v2;
        cin>>v1>>v2;
        vsr(v1,v2);
       
    }

}
