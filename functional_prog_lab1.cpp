#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Human
{

private:
    string name;
    int birtyear;
    double weight;
    double height;
    string country;


public:
    Human()
    {
        name = "";
        birtyear = 0;
        weight = 0.0;
        height = 0.0;
        country = "";
    }
    Human(string n, int by, double w, double h, string c)
    {
        name = n;
        birtyear = by;
        weight = w;
        height = h;
        country = c;
    }

    string getName()
    {
        return name;
    }

    int getBirthYear()
    {
        return birtyear;
    }

    double getWeight()
    {
        return weight;
    }

    double getHeight()
    {
        return height;
    }

    string getCountry()
    {
        return country;
    }

    void Print()
    {
        cout << "Ім'я: " << name << endl;
        cout << "Рік народження: " << birtyear << endl;
        cout << "Зріст: " << height << " см " << endl;
        cout << "Вага: " << weight << " кг " << endl;
        cout << "Країна: " << country << endl;
    }

    void Input()
    {
        cout << "Введіть ім'я: ";
        cin >> name;
        cout << "Введіть рік народження: ";
        cin >> birtyear;
        cout << "Введіть вагу (кг): ";
        cin >> weight;
        cout << "Введіть зріст (см): ";
        cin >> height;
        cout << "Країна: ";
        cin >> country;
    }
};

    int main()
    {
        SetConsoleOutputCP(1251);
        SetConsoleCP(1251);


        Human human;
        cout << "Введіть данні про людину:" << endl;
        human.Input();
        cout << endl << "Данні про людину:" << endl;
        human.Print();
        return 0;
    }

