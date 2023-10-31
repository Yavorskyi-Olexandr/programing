/*14.	Напишіть і перевірте функцію, що повертає істину, 
якщо з клавіатури введені символи 'Y', 'y', 'д', 'Д' і брехня інакше.*/

#include <iostream>
using namespace std;


bool Response(char response) {
    return (response == 'Y' || response == 'y' || response == 'д' || response == 'Д');
}

int main() {

    setlocale(LC_ALL, "ukr");

    char response;

    cout << "Введіть Y або N : ";
    cin >> response;



    if (Response(response)) {
        cout << "Ви ввели позитивну відповідь." << endl;
    }
    else {
        cout << "Ви ввели негативну відповідь " << endl;
    }

    return 0;
}

