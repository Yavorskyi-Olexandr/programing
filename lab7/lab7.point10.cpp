#include <iostream>
#include <Windows.h>
using namespace std;

// 10 Напишіть 3 варіанти switch для друку назв днів тижня, використовуючи різні типи його параметра: ціле, символ та перерахування.

enum DaysOfWeek { // перерахування для представлення днів тижня
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

void main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int choice;

    do {   // do-while цикл для повторення введення у разі некоректного вибору
        cout << "Оберіть тип введення (1 - Ціле число, 2 - Символ, 3 - Перерахування): "; // виводимо меню вибору типу введення
        cin >> choice;

        switch (choice) {
        case 1: {  // введення цілого числа для номера дня тижня
            int dayNumber;
            cout << "Введіть номер дня тижня (1-7): ";
            cin >> dayNumber;

            switch (dayNumber) { // switch для визначення назви дня тижня
            case 1:
                cout << "Понеділок";
                break;
            case 2:
                cout << "Вівторок";
                break;
            case 3:
                cout << "Середа";
                break;
            case 4:
                cout << "Четвер";
                break;
            case 5:
                cout << "П'ятниця";
                break;
            case 6:
                cout << "Субота";
                break;
            case 7:
                cout << "Неділя";
                break;
            default:
                cout << "Некоректний номер дня!";
            }
            break;
        }

        case 2: { // введення символу для літери дня тижня
            char daySymbol;
            cout << "Введіть першу літеру дня тижня: ";
            cin >> daySymbol;
            switch (daySymbol) {        // switch для визначення назви дня тижня
            case 'П':
                cout << "Понеділок";
                break;
            case 'В':
                cout << "Вівторок";
                break;
            case 'С':
                cout << "Середа";
                break;
            case 'Ч':
                cout << "Четвер";
                break;
            case 'п':
                cout << "П'ятниця";
                break;
            case 'с':
                cout << "Субота";
                break;
            case 'Н':
                cout << "Неділя";
                break;
            default:
                cout << "Некоректна літера!";
            }
            break;
        }

        case 3: { // Використання перерахування для визначення дня тижня
            DaysOfWeek day = WEDNESDAY;
            switch (day) {
            case MONDAY:
                cout << "Понеділок";
                break;
            case TUESDAY:
                cout << "Вівторок";
                break;
            case WEDNESDAY:
                cout << "Середа";
                break;
            case THURSDAY:
                cout << "Четвер";
                break;
            case FRIDAY:
                cout << "П'ятниця";
                break;
            case SATURDAY:
                cout << "Субота";
                break;
            case SUNDAY:
                cout << "Неділя";
                break;
            default:
                cout << "Некоректний день тижня!";
            }
            break;
        }
        default:
            cout << "Некоректний вибір!";
        }

        cout << endl; // новий рядок для чіткого виведення при повторних ітераціях

    } while (choice < 1 || choice > 3); // повторювати, доки вибір не є коректним
}

