#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Student {
public:
    Student() {                                   // конструктор класу

        age = 0;
        gender = "";
        scholarship = 0.0;
    }

    ~Student() {}                               // деструктор класу


    void setAge(int newAge) {                  // методи для встановлення значень 
        age = newAge;
    }

    void setGender(const string& newGender) {
        gender = newGender;
    }

    void setScholarship(double newScholarship) {
        scholarship = newScholarship;
    }



    int getAge() const {                 // методи для отримання значень 
        return age;
    }

    std::string getGender() const {
        return gender;
    }

    double getScholarship() const {
        return scholarship;
    }


    
    void Input() {                // метод для введення всіх даних студента
        cout << "Введіть вік студента: ";
        cin >> age;

        cout << "Введіть стать студента: ";
        cin.ignore();              // очищення буфера
        getline(cin, gender);

        cout << "Введіть стипендію студента: ";
        cin >> scholarship;
    }

    
    void Print() {                     // метод для виведення всіх даних студента
        cout << "Вік студента: " << age << endl;
        cout << "Стать студента: " << gender << endl;
        cout << "Стипендія студента: " << scholarship << endl;
    }

private:
    int age;
    string gender;
    double scholarship;
};


void calculate (const Student& student1, const Student& student2, int& averageAge, double& totalScholarship) {
    averageAge = (student1.getAge() + student2.getAge()) / 2;
    totalScholarship = student1.getScholarship() + student2.getScholarship();
}


int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    Student student1;
    Student student2;

    cout << "Введіть дані для першого студента:" << endl;
    student1.Input();

    cout << "Введіть дані для другого студента:" << endl; 
    student2.Input();

    cout << "Дані першого студента:" << endl; 
    student1.Print();

    cout << "Дані другого студента:" << endl;
    student2.Print();

    int averageAge;
    double totalScholarship;

    calculate(student1, student2, averageAge, totalScholarship);

    cout << "Середній вік студентів: " << averageAge << endl;
    cout << "Сумарна стипендія студентів: " << totalScholarship << endl;

    return 0;
}