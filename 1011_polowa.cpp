# include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();

    while(t--)
    {
        string tekst;
        getline(cin,tekst);

        size_t polowa=tekst.length()/2;
        cout<<tekst.substr(0,polowa)<<endl;
    

    }
}