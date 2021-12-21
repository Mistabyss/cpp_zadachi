//метод Ньютона

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float x, xPrev;
    x = 2;
    xPrev = 0;
    double eps = 0.000001;
    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = xPrev - ((pow(xPrev, 3) - xPrev - 1) / (3 * pow(xPrev, 2) - 1));
    }
    cout << "Корень: " << x << endl;
    return 0;
}

//метод половинного деления

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, b, c;
    float fA, fB, fC;
    double eps = 0.000001;
    a = 1;
    b = 2;
    while (b - a > eps)
    {
        c = (a + b) / 2;
        fA = (pow(a, 3) - a - 1);
        fB = (pow(b, 3) - b - 1);
        fC = (pow(c, 3) - c - 1);
        if (fA * fC < 0) { b = c; }
        else if (fC * fB < 0) { a = c; }
        else { cout << "Что-то не то!" << endl; }
    }
    cout << "Корни: " << a << "; " << b << endl;
    return 0;
}

//метод итераций

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float x, xPrev;
    double lambda = -0.05;
    x = 2;
    xPrev = 0;
    double eps = 0.000001;
    while (abs(x - xPrev) > eps)
    {
        xPrev = x;
        x = lambda * (pow(xPrev, 3) - xPrev - 1) + xPrev;
    }
    cout << "Корень: " << x << endl;
    return 0;
}