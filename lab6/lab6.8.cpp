#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    bool LeapYear() const { //високосний рік
        if (year % 4 == 0) {
            if (year % 100 != 0 || (year % 100 == 0 && year % 400 == 0)) {
                return true;
            }
        }
        return false;
    }

public:

    //конструктори
    Date() : day(1), month(1), year(2000) {} 
    Date(int d, int m, int y) : day(d), month(m), year(y) {}


    int GetDay() const { return day; }
    int GetMonth() const { return month; }
    int GetYear() const { return year; }

    bool IsValid() const {   // перевірка на введення днів місяців років. 
        if (month >= 1 && month <= 12) {
            if (day >= 1 && day <= 31) {
                if (month == 4 || month == 6 || month == 9 || month == 11) {
                    return (day <= 30);
                }
                else if (month == 2) {   //перевірка на високосний рік
                    if (LeapYear()) {
                        return (day <= 29);
                    }
                    return (day <= 28);
                }
                return true;
            }
        }
        return false;
    }

    //формати виведення
    string ToStringFirst() const {
        string dateStr = to_string(day) + "." + to_string(month) + "." + to_string(year);
        return dateStr;
    }

    string ToStringSecond() const {
        string dateStr = to_string(day) + "/" + to_string(month) + "/" + to_string(year);
        return dateStr;
    }

    string ToStringThird() const {
        string months[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
        string dateStr = months[month - 1] + "-" + to_string(day) + "-" + to_string(year);
        return dateStr;
    }

    void PrintLeapYear() const {
        if (LeapYear()) {
            cout << "Рік " << year << " є високосним." << endl;
        }
        else {
            cout << "Рік " << year << " не є високосним." << endl;
        }
    }

    ~Date() {}
};

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int day, month, year;

    cout << "Введіть день: ";
    cin >> day;

    cout << "Введіть місяць: ";
    cin >> month;

    cout << "Введіть рік: ";
    cin >> year;

    Date myDate(day, month, year);

    if (myDate.IsValid()) {
        cout << "Початкова дата: " << myDate.ToStringFirst() << endl;
        cout << "Формат 1: " << myDate.ToStringFirst() << endl;
        cout << "Формат 2: " << myDate.ToStringSecond() << endl;
        cout << "Формат 3: " << myDate.ToStringThird() << endl;
        myDate.PrintLeapYear();
    }
    else {
        cout << "Недійсна дата." << endl;
    }

    return 0;
}
