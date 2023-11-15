#include <iostream>
using namespace std;

void lab8_1()
{
    int m[] = { 1, 5, 3, 2, 7, 9, 8, 10, 4, 11, 12, 6 };

    for (int i = 0; i < 12 - 1; i++) {
        for (int j = 0; j < 12 - 1; j++) {
            if (m[j] > m[j + 1]) {
                int temp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = temp;
            }
        }
    }

    cout << "Ascending order: ";

    for (int i = 0; i < 12; i++) {
        cout << m[i] << ", ";
    }

    cout << "\n";

    for (int i = 0; i < 12 - 1; i++) {
        for (int j = 0; j < 12 - 1; j++) {
            if (m[j] < m[j + 1]) {
                int temp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = temp;
            }
        }
    }

    cout << "Descending order: ";

    for (int i = 0; i < 12; i++) {
        cout << m[i] << ", ";
    }

    cout << "\n";
}

void lab8_2()
{
    int n[] = {-1, -2,6, -3, 2, -4, -5, 5};
    int size = sizeof(n) / sizeof(n[0]);
    int max = n[0];
    int maxIndex = 0;

    for (int i = 0; i < size; i++) {
        if (n[i] > max) {
            max = n[i];
            maxIndex = i;
        }
    }

    for (int i = 0; i < maxIndex; i++) {
        if (n[i] < 0) {
            n[i] = 0;
        }
    }

    cout << "New array: ";

    for (int i = 0; i < size; i++) {
        cout << n[i] << ", ";
    }
}

int main()
{
    lab8_1();
    lab8_2();

    return 0;
}

