// 5. Напишіть програму, яка визначає більше трьох випадкових чисел.

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main() {

    setlocale(LC_ALL, "ukr");
    srand(static_cast<unsigned>(time(0)));

    int n;
   cout << "Введіть кількість чисел, які ви хочете згенерувати: ";
   cin >> n;

    if (n <= 3) {
        cout << "Введіть більше за трьох чисел." << endl;
    }
    else {
        cout << "Згенеровані числа: ";
        for (int i = 0; i < n; i++) {
            int randomNumber = rand(); 
            cout << randomNumber << " ";
        }
       cout << endl;
    }

    return 0;
}