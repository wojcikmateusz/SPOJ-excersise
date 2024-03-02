#include <iostream>

using namespace std;

enum Kierunek { POLNOC, POLUDNIE, ZACHOD, WSCHOD };

void znajdzDroge(int N)
{
    int pionowo = 0;
    int poziomo = 0;

    while (N--)
    {
        int kierunek, kroki;
        cin >> kierunek >> kroki;

        if (kierunek == POLNOC)
        {
            pionowo += kroki;
        }
        else if (kierunek == POLUDNIE)
        {
            pionowo -= kroki;
        }
        else if (kierunek == WSCHOD)
        {
            poziomo += kroki;
        }
        else if (kierunek == ZACHOD)
        {
            poziomo -= kroki;
        }
    }

    if (pionowo == 0 && poziomo == 0)
    {
        cout << "studnia" << endl;
    }
    else
    {
        if (pionowo != 0)
        {
            cout << POLNOC << " " << pionowo << endl;
        }
        if (poziomo != 0)
        {
            cout << WSCHOD << " " << poziomo << endl;
        }
    }
}

int main()
{
    int D;
    cin >> D;

    while (D--)
    {
        int N;
        cin >> N;
        znajdzDroge(N);
    }

    return 0;
}
