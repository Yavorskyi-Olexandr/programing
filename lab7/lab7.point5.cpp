#include <iostream>
#include <Windows.h>
using namespace std;

/* 5 Напишіть програму обчислення суми та добутку чисел, що вводяться з клавіатури :
a)	кількість чисел попередньо вводиться із клавіатури;
b)	обчислення припиняються на запит програми. */

int main()
{

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int sum = 0;
    int product = 1;
    char choice;

    cout << "Виберіть режим введення:\n";
    cout << "a) Кількість чисел попередньо вводиться;\n";
    cout << "b) Обчислення припиняються на запит.\n";

    cout << "Ваш вибір: ";
    cin >> choice;

    if (choice == 'a' || choice == 'A') {
        int count;

        cout << "Введіть кількість чисел: ";
        cin >> count;

        if (count <= 0) {

            cout << "Неправильна кількість чисел. Програма завершиться.\n";
            return 1;
        }

        for (int i = 0; i < count; ++i) {
            int number;

            cout << "Введіть число " << i + 1 << ": ";
            cin >> number;

            sum += number;
            product *= number;
        }
    }
    else if (choice == 'b' || choice == 'B') {
        do {
            int number;

            cout << "Введіть число: ";
            cin >> number;

            sum += number;
            product *= number;

            cout << "Продовжити введення? (y/n): ";
            cin >> choice;

        } while (choice == 'y' || choice == 'Y');
    }
    else {

        cout << "Невірний вибір. Програма завершиться.\n";
        return 1;
    }


    cout << "Сума введених чисел: " << sum << endl;
    cout << "Добуток введених чисел: " << product << endl;

    return 0;
}
