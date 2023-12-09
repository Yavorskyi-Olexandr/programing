#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

/*Напишіть циклічну програму для введення параметрів об'єкта (Cat, Pencil, Worker, Student…)
з клавіатури та роздруківки їх на екран. Використовувати класи з попередньої теми.*/

class Cat {
public:
    string name;
    int age;
    string breed;

    void display() const {
        cout << "Кішка - Ім'я " << name << ", Вік: " << age << ", Порода: " << breed << endl;
    }
};

class Pencil {
public:
    string brand;
    double price;
    string hardness;

    void display() const {
        cout << "Олівець - Марка " << brand << ", Ціна: " << price << ", Твердість: " << hardness << endl;
    }
};

class Worker {
public:
    string name;
    int age;
    string jobTitle;

    void display() const {
        cout << "Робітник - Ім'я: " << name << ", Вік: " << age << ", Посада: " << jobTitle << endl;
    }
};

class Student {
public:
    string name;
    int age;

    void display() const {
        cout << "Студент - Ім'я: " << name << ", Вік: " << age << std::endl;
    }
};

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int numberOfObjects = 2; // Вказати кількість об'єктів, яку ви хочете ввести

    for (int i = 0; i < numberOfObjects; ++i) {
        char type;
        cout << "Введіть тип об’єкта (c для Cat, p для Pencil, w для Worker, s для Student): ";
        cin >> type;

        if (type == 'c') {
            Cat cat;
            cout << "Введіть ім'я кота: ";
            cin >> cat.name;
            cout << "Введіть вік кота: ";
            cin >> cat.age;
            cout << "Введіть породу кота: ";
            cin >> cat.breed;

            cout << "Деталі об'єкта: ";
            cat.display();
        }
        else if (type == 'p') {
            Pencil pencil;
            cout << "Введіть марку олівця: ";
            cin >> pencil.brand;
            cout << "Введіть ціну олівця: ";
            cin >> pencil.price;
            cout << "Введіть твердість олівця: ";
            cin >> pencil.hardness;

            cout << "Деталі об'єкта: ";
            pencil.display();
        }
        else if (type == 'w') {
            Worker worker;
            cout << "Введіть ім'я працівника: ";
            cin >> worker.name;
            cout << "Введіть вік працівника: ";
            cin >> worker.age;
            cout << "Введіть посаду працівника: ";
            cin >> worker.jobTitle;

            cout << "Деталі об'єкта: ";
            worker.display();
        }
        else if (type == 's') {
            Student student;
            cout << "Введіть ім'я студента: ";
            cin >> student.name;
            cout << "Введіть вік студета: ";
            cin >> student.age;

            cout << "Деталі об'єкта: ";
            student.display();
        }
        else {
            cout << "Недійсний тип. Введіть «c» для Cat, «p» для Pencil, «w» для Worker або «s» для Student." << endl;
            --i;
            continue;
        }

        cout << endl;
    }

    return 0;
}

