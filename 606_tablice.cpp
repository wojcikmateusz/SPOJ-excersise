#include <iostream>
#include <vector>

using namespace std;


int main()
{
int t;
cin>>t;

if(t<=100)
{
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;

        vector<int> liczby;

        for(int j=0; j<n;j++)
        {
            int liczba;
            cin>>liczba;
            liczby.push_back(liczba);
        }

        for(int j=n -1; j>=0;j--)
        {
            cout<<liczby[j]<<" ";
        }
        cout<<endl;

    }
}
else{exit(0);}
}