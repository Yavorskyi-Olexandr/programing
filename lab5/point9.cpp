// 9.	Напишіть прототип функції з ім'ям Perimeter(), яка повертає довге беззнакове ціле і приймає два параметри типу int.

#include <iostream>
using namespace std;

unsigned long Perimeter(int length, int width);

int main() {
    setlocale(LC_ALL, "ukr");

    int length, width;

    cout << "Введiть довжину: ";
    cin >> length;

    cout << "Введiть ширину: ";
    cin >> width;

    unsigned long result = Perimeter(length, width);
    cout << "Периметр: " << result << endl;

    return 0;
}

unsigned long Perimeter(int length, int width) {
    return 2 * (static_cast<unsigned long>(length) + static_cast<unsigned long>(width));
}
