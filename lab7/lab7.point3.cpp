#include <iostream>
using namespace std;

/*3	Напишіть цикли for, while, do…while для друку чисел від 100 до 200 через 2.*/


int main() {
    // Використання циклу for
    for (int i = 100; i <= 200; i += 2) {
       cout << i << " ";
    }
    cout << "\n " << endl;

    // Використання циклу while
    int j = 100;
    while (j <= 200) {
        cout << j << " ";
        j += 2;
    }
    cout << "\n " << endl;

    // Використання циклу do while
    int k = 100;
    do {
        cout << k << " ";
        k += 2;
    } while (k <= 200);
    cout << "\n " << endl;

    return 0;
}
