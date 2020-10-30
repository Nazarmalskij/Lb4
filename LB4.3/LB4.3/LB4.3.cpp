#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, a, b, c, xp, dx, xk, F, L;

    cout << " x = "; cin >> x;
    cout << " a = "; cin >> a;
    cout << " b = "; cin >> b;
    cout << " c = "; cin >> c;

    cout << " xp = "; cin >> xp;
    cout << " xk = "; cin >> xk;
    cout << " dx = "; cin >> dx;

    cout << fixed;
    cout << "-------------------" << endl;
    cout << "|" << setw(8) << "x    " << "|" << setw(8) << "F    " << "|" << endl;
    cout << "-------------------" << endl;

    x = xp;

    while (x <= xk) {

        if (x + 10 < 0 && b != 0)
        F = a * x * x - c * x + b;
        if (x + 10 > 0 && b == 0)
        F = (x - a / x - c);
        if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
            F = (-x / a - c);
       

        cout << "|" << setw(8) << setprecision(1) << x << "|" << setw(8) << setprecision(1) << F << "|" << endl;

        x += dx;

    }
    cout << "-------------------" << endl;

    cin.get();
    system("pause");
    return 0;
}