/* 16.	Напишіть та перевірте роботу void-функції для подвоювання числа за допомогою механізму передачі параметрів за значенням. 
Перевірте неправильність роботи. */ 


#include <iostream>
using namespace std;

void DoubleValue(int value) {
    value *= 2;
}

int main() {

    setlocale(LC_ALL, "ukr");

    int number = 5;

    cout << "Початкове значення: " << number << endl;

    DoubleValue(number);

    cout << "Значення після виклику функції: " << number << endl;

    return 0;
}
