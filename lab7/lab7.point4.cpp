#include <iostream>
#include <Windows.h>
using namespace std;

/*4	Напишіть програму для введення числа із заданого діапазону з клавіатури. 
У разі виходу за кордон діапазону повторіть введення номера.*/

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int lowerLimit = 1; // Нижня межа діапазону
    const int upperLimit = 100; // Верхня межа діапазону

    int number;

    do {
        cout << "Введіть число від " << lowerLimit << " до " << upperLimit << ": ";
        cin >> number;

        if (number < lowerLimit || number > upperLimit) {
            cout << "Число виходить за межі діапазону. Спробуйте ще раз." << endl;
        }
    } while (number < lowerLimit || number > upperLimit);

    cout << "Ви ввели коректне число: " << number << endl;

    return 0;
}

