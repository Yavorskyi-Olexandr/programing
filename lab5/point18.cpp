/*18.	Напишіть функцію для додавання двох чисел, що має одне значення за промовчанням.*/

#include <iostream>
using namespace std;

int AddNumbers(int a, int b = 0) {
    return a + b;
}

int main() {

    setlocale(LC_ALL, "ukr");

    int n1, n2;

    cout << "Введiть перше число: ";
    cin >> n1;

    cout << "Введiть друге число: ";
    cin >> n2;

    int sum = AddNumbers(n1, n2);

    cout << "Сума чисел: " << sum << endl;

    return 0;
}
