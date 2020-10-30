#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, xp, dx, xk, y , F , R;

    cout << " x = "; cin >> x;
    cout << " R = "; cin >> R;
    cout << " xp = "; cin >> xp;
    cout << " xk = "; cin >> xk;
    cout << " dx = "; cin >> dx;

    cout << fixed;
    cout << "-------------------" << endl;
    cout << "|" << setw(8) << "x    " << "|" << setw(8) << "F    " << "|" << endl;
    cout << "-------------------" << endl;

    x = xp;

    while (x <= xk) {
        if (x <= -1 - R)
            y = 1;
        else
            if (-1 - R < x <= -1)
                y = -1 - sqrt(R * R - x * x);
            else
                if (-1 < x <= 2)
                    y = -R;
                else
                    if (2 < x);
        y = (-4 * R + R * x / 2);


        cout << "|" << setw(8) << setprecision(1) << x << "|" << setw(8) << setprecision(1) << y << "|" << endl;

        x += dx;

    }
    cout << "-------------------" << endl;

    cin.get();
    system("pause");
    return 0;
}