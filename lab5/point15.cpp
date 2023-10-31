/*15.	Напишіть та перевірте inline – функцію, що повертає числове значення переданого їй символу.*/ 

#include <iostream>
using namespace std;

inline int GetNumericValue(char c) {
    return static_cast<int>(c);
}

int main() {
    setlocale(LC_ALL, "ukr");

    char inputChar;

    cout << "Введiть символ: ";
    cin >> inputChar;

    int numericValue = GetNumericValue(inputChar);
    cout << "Числове значення символу '" << inputChar << "': " << numericValue << endl;

    return 0;
}