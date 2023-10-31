/* 7.	Реалізуйте набір особистих функцій tolowerR(ch), toupperR(ch), isalphaR(ch), islowerR(ch), isupperR(ch), isalnumR(ch)
для роботи із символами російського алфавіту. */

#include <iostream>
using namespace std;

char tolowerR(char ch) {                             //функція робить символ маленьким
    if (ch >= 'А' && ch <= 'Я') {
        return ch + 32; 
    }
    else {
        return ch;
    }
}

char toupperR(char ch) {                            //функція робить символ великим
    if (ch >= 'а' && ch <= 'я') {
        return ch - 32; 
    }
    else {
        return ch;
    }
}

bool isalphaR(char ch) {                                         //перевірка на літеру
    return (ch >= 'А' && ch <= 'я');
}

bool islowerR(char ch) {                                             //перевірка на маленьку літеру
    return (ch >= 'а' && ch <= 'я');
}

bool isupperR(char ch) {                                        //перевірка на велику літеру
    return (ch >= 'А' && ch <= 'Я');
}

bool isalnumR(char ch) {                                          //перевірка на символ буква/цифра
    return isalphaR(ch) || (ch >= '0' && ch <= '9');
}

int main() {
    setlocale(LC_ALL, "ukr");

    char ch;

    cout << "Введiть символ росiйського алфавiту: ";
    cin >> ch;

    cout << "tolowerR: " << tolowerR(ch) << endl;
    cout << "toupperR: " << toupperR(ch) << endl;
    cout << "isalphaR: " << isalphaR(ch) << endl;
    cout << "islowerR: " << islowerR(ch) << endl;
    cout << "isupperR: " << isupperR(ch) << endl;
    cout << "isalnumR: " << isalnumR(ch) << endl;

    return 0;
}