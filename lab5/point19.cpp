/*19.	Напишіть три перевантажені функції з двома параметрами різних типів, 
що повертають істину, якщо значення параметрів дорівнюють.*/

#include <iostream>
using namespace std;


bool AreEqual(int a, int b) {
    return a == b;
}

bool AreEqual(double a, double b) {
    return a == b;
}

bool AreEqual(const string& a, const string& b) {
    return a == b;
}

int main() {
    setlocale(LC_ALL, "ukr");

    int num1 = 10, num2 = 10;
    double dbl1 = 3.14, dbl2 = 3.14;
    string str1 = "Hello", str2 = "Hello";

    if (AreEqual(num1, num2)) {
        cout << "Цiлi числа рiвнi." << endl;
    }

    if (AreEqual(dbl1, dbl2)) {
        cout << "Дiйснi числа рiвнi." << endl;
    }

    if (AreEqual(str1, str2)) {
        cout << "Рядки рiвнi." << endl;
    }

    return 0;
}