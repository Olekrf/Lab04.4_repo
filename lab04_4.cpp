// Lab_04_4.cpp
// < Лазарук Олег >
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 17

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, R, y;

    cout << "xp = ";
    cin >> xp;
    cout << "xk = ";
    cin >> xk;
    cout << "dx = ";
    cin >> dx;
    cout << "R = ";
    cin >> R;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
         << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -1 - R)
            y = 1;
        else if (x > -1 - R && x <= -1)
            y = -sqrt(R * R - pow(x + 1, 2));
        else if (x > -1 && x <= 2)
            y = -R;
        else
            y = (R * (x - 4)) / 2;
        cout << "|" << setw(7) << setprecision(2) << x
             << "    |" << setw(8) << setprecision(3) << y
             << "     |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}
