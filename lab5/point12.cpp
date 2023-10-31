/* 12.	Напишіть функцію, яка повертає приватне від поділу двох цілих чисел. 
 Якщо друге число 0, то ділення не виконуйте та поверніть –1. */

#include <iostream>
using namespace std;

int Divide(int numerator, int denominator) {
    if (denominator == 0) {
        cout << "ділення на 0" << endl;
        return -1;
    }
    else {
        return numerator / denominator;
    }
}

int main() {

    setlocale(LC_ALL, "ukr");

    int numerator, denominator;

    cout << "Введiть чисельник: ";
    cin >> numerator;

    cout << "Введiть знаменник: ";
    cin >> denominator;

    int result = Divide(numerator, denominator);
    if (result != -1) {
        cout << "Результат дiлення: " << result << endl;
    }

    return 0;
}


