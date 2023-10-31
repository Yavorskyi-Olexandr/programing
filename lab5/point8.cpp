/*8.	Оголосити символьні масиви для зберігання елементів своєї адреси (місто, район, вулиця, будинок, квартира) та всієї адреси. 
Проініціалізувати їх порожнім рядком. Визначити значення елементів адреси, виконавши надання рядків. 
Сформувати значення всієї адреси, виконавши конкатенацію рядків. Визначити довжину елементів адреси та всієї адреси. 
Визначте якийсь рядок більше: місто чи район, виконати порівняння рядків
*/

#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;


int main()
{
    setlocale(LC_ALL, "ukr");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    char city[50] = "";
    char district[50] = "";
    char street[50] = "";
    char house[50] = "";
    char apartment[50] = "";

    cout << "Введiть мiсто: ";
    cin >> city;
    cout << "Введiть район: ";
    cin >> district;
    cout << "Введiть вулицю: ";
    cin >> street;
    cout << "Введiть будинок: ";
    cin >> house;
    cout << "Введiть квартиру: ";
    cin >> apartment;



    // конкатенації рядків
    string fullAddress = string(city) + ", " + string(district) + ", " + string(street) + " " + string(house) + ", кв. " + string(apartment);



    int cityLength = strlen(city);   // довжина елементів адреси та всієї адреси
    int districtLength = strlen(district);
    int fullAddressLength = fullAddress.length();


    string largeString = (cityLength > districtLength) ? "мiсто" : "район"; // порівняння міста і района

    cout << "Ваша адреса: " << fullAddress << endl;
    cout << "Довжина мiста: " << cityLength << " символiв" << endl;
    cout << "Довжина району: " << districtLength << " символiв" << endl;
    cout << "Довжина всiєї адреси: " << fullAddressLength << " символiв" << endl;
    cout << "Бiльший рядок: " << largeString << endl;
}