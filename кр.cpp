#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "ukrainian");

    srand(time(0));

    int a;

    cout << "Введiть довжину масивiв: ";
    cin >> a;

    int* arr1 = new int[a];        // динамічні масиви
    int* arr2 = new int[a];
    int* result = new int[a + 1]; 

    for (int i = 0; i < a; i++) {
        arr1[i] = rand() % 10;
        arr2[i] = rand() % 10;
    }

   
    int p = 0; // змінна переносу

    for (int i = a - 1; i >= 0; i--) { // обчислення третього масиву
        int sum = arr1[i] + arr2[i] + p;
        result[i + 1] = sum % 10; 
        p = sum / 10; 
    }

    if (p > 0) {    // перевірка на перенос
        result[0] = p;
    }

    for (int i = 0; i < a; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < a; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < a + 1; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    delete[] arr1;
    delete[] arr2;
    delete[] result;

    return 0;
}
