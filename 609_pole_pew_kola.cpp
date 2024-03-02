#include <iostream>
#include<iomanip>
#include <cmath>

using namespace std;


int main()
{
    
    double r,d;
    cin>>r>>d;

    if (1 <= d && d < 2 * r && 2 * r <= 2000)
    {
        double pi = 3.141592654;
        double theta, Sk, Ss, s;

        theta = 2 * acos(d / (2 * r));
        Sk = pi * r * r;
        Ss = pi * (r-d/2)*(r-d/2);
        s = Sk - Ss;

        cout << fixed << setprecision(2);
        cout << s << endl;
    }
    else{exit(0);}
    
}