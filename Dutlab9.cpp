#include <iostream>
using namespace std;

void lab9_3()
{
    int n[] = { 12, 94, 1200, 834, 1 };
    int size = sizeof(n) / sizeof(n[0]);
    int max = n[0];
    int min = n[0];
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < size; i++) {
        if (n[i] > max) {
            max = n[i];
            maxIndex = i;
        }
    }

    for (int i = 1; i < size; i++) {
        if (n[i] < min) {
            min = n[i];
            minIndex = i;
        }
    }

    int temp = n[maxIndex];
    n[maxIndex] = n[minIndex];
    n[minIndex] = temp;

    cout << "New array after swapping the max and min values: ";

    for (int i = 0; i < size; i++) {
        cout << n[i] << ", ";
    }

    cout << "\n";
}

void lab9_4()
{
    int n[] = { 1, 5, 3, 7, 11, 43, 132, 4, 7, 400, 34 };
    int size = sizeof(n) / sizeof(n[0]);
    int a;

    cout << "Enter the number A: ";
    cin >> a;

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (n[i] > a) {
            count++;
        }
    }

    cout << "The number of elements in the array bigger then the number " << a << " is: " << count << "\n";
}

void lab9_5()
{
    int n[] = {1, 5, 9, 12, 54, 75, 13, 40, 74};
    int size = sizeof(n) / sizeof(n[0]);
    int max = n[0];
    int newMax = n[0];

    for (int i = 1; i < size; i++) {
        if (n[i] > max) {
            max = n[i];
        }
    }

    auto newN = remove(begin(n), end(n), max);

    for (int i = 1; i < size; i++) {
        if (n[i] > newMax) {
            newMax = n[i];
        }
    }

    cout << "The second biggest number in the array is: " << newMax << "\n";
}

void lab9_6()
{
    int n[] = { 1, 5, 9, 12, 54, 75, 13, 40, 74, 0, 54, 234, 2 };
    int size = sizeof(n) / sizeof(n[0]);
    int indexOfO = 0;

    for (int i = 1; i < size; i++) {
        if (n[i] == 0) {
            indexOfO = i + 1;
        }
    }

    cout << "The first found 0 in the array is at the position: " << indexOfO;
}

int main()
{
    lab9_3();
    lab9_4();
    lab9_5();
    lab9_6();
    return 0;
}