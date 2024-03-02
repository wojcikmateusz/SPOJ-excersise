#include <iostream>

using namespace std;

int main() {
    float x, y;
    char wybor;

    while (true) 
    {
        cin >> wybor;

        if (wybor == 'q') 
        {
            break;  
        }

       
        cin >> x >> y;

        switch (wybor) 
        {
            case '+':
                cout << x + y << endl;
                break;
            case '-':
                cout << x - y << endl;
                break;
            case '*':
                cout << x * y << endl;
                break;
            case '/':
                if (y != 0) 
                {
                    cout << x / y << endl;
                } else 
                {
                    cout << "Nie mozna dzielic przez zero!" << endl;
                }
                break;
            default:
                cout << "Niepoprawny znak operacji." << endl;
                break;
        }

    }

    return 0;
}
