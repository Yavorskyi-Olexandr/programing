// 10.	Напишіть визначення функції Perimeter(), яка обчислює периметр прямокутника.


#include <iostream>
using namespace std;

int Perimeter(int length, int width) {
    return 2 * (length + width);
}

int main() {
    setlocale(LC_ALL, "ukr");

    int length, width;

    cout << "Введiть довжину: ";
    cin >> length;

    cout << "Введiть ширину: ";
    cin >> width;

    int result = Perimeter(length, width);
    cout << "Периметр прямокутника: " << result << endl;

    return 0;
}
