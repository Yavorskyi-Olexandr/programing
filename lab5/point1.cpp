// 1. Обчислити коріння квадратного рівняння виду ax2 + bx + c = 0 за формулою

#include <iostream>
#include <cmath>
using namespace std;

void main()
{
    setlocale(LC_ALL, "ukr");

    double a, b, c;
    cout << "Введiть коефiцiєнти a, b, c: ";
    cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Коренi рiвняння: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (discriminant == 0)
    {
        double x1 = -b / (2 * a);
        cout << "Рiвняння має один корiнь: x1 = " << x1 << endl;
    }
    else
    {
        cout << "Рiвняння не має коренiв." << endl;
    }
}
