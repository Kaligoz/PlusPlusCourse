#include <iostream>

using namespace std;

void problem1();
void problem2();

void problem1() {
    int n;

    cout << "Enter a three digit number: ";
    cin >> n;

    if (n >= 100 && n <= 999) {

        int sum = 0;

        for (int temp = n; temp > 0; temp /= 10) {
            int digit = temp % 10;
            if (digit > 5) {
                sum += digit;
            }
        }
        cout << "Sum of digits, higher then 5: " << sum << endl;
    }
    else {
        cout << "No digit was higher then 5.";
    }

}

void problem2() {
    int x;

    setlocale(LC_CTYPE, "ukr");

    cout << "Enter a number of a month: ";
    cin >> x;

    switch (x) {
    case 1:
        cout << "January, Сiчень";
        break;
    case 2:
        cout << "January, Лютий";
        break;
    case 3:
        cout << "March, Березень";
        break;
    case 4:
        cout << "April, Квiтень";
        break;
    case 5:
        cout << "May, Травень";
        break;
    case 6:
        cout << "June, Червень";
        break;
    case 7:
        cout << "July, Липень";
        break;
    case 8:
        cout << "August, Серпень";
        break;
    case 9:
        cout << "September, Вересень";
        break;
    case 10:
        cout << "October, Жовтень";
        break;
    case 11:
        cout << "November, Листопад";
        break;
    case 12:
        cout << "December, Грудень";
        break;

    }
}

int main()
{
    
    problem1();
    problem2();

    return 0;
}
