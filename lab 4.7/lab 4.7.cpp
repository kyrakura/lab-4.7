// Lab_04_7.cpp
// < Цай Девід >
// Лабораторна робота № 4.7
// Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних
// Варіант 23
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double xp, xk, x, dx, eps;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
        << setw(10) << "exp(x)" << " |"
        << setw(7) << "S" << "    |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "-------------------------------------------------" << endl;

    x = xp;
    while (x <= xk) {
        int n = 0;
        double a = 1, R, S = 1;

        do {
            R = x / (n + 1);
            a *= R;
            S += a;
            n++;
        } while (abs(a) >= eps);

        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(10) << setprecision(5) << exp(x) << " |"
            << setw(10) << setprecision(5) << S << " |"
            << setw(5) << n << " |"
            << endl;

        x += dx;
    }

    cout << "-------------------------------------------------" << endl;

    return 0;
}
