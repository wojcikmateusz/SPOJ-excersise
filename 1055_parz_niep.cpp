#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> liczby;
        vector<int> parz;
        vector<int> niep;

        while (n--)
        {
            int k;
            cin >> k;
            liczby.push_back(k);
        }

        for (size_t i = 1; i < liczby.size(); i += 2)
        {
            parz.push_back(liczby[i]);
        }

        for (size_t i = 0; i < liczby.size(); i += 2)
        {
            niep.push_back(liczby[i]);
        }

        for (int liczba : parz)
        {
            cout << liczba << " ";
        }

        for (int liczba : niep)
        {
            cout << liczba << " ";
        }

        cout << endl;
    }

    return 0;
}
