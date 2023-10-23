#include <iostream>

using namespace std;

void pz2_6()
{
    int cO, steps = 0;
    cout << "Enter a number:";
    cin >> cO;

    while (cO != 1) {
        if (cO % 2 == 0) {
            cO /= 2;
        }
        else {
            cO = 3 * cO + 1;
        }
        cout << cO << "\n";
        steps++;
    }

    cout << "steps = " << steps << "\n";
}

void pz2_7()
{
    double pi4 = 0.;
    long n;
    
    cout << "Number of iterations? ";
    cin >> n;

    for (long i = 0; i < n; i++) {
        if (i % 2 == 0) {
            pi4 += 1.0 / (2 * i + 1);
        }
        else {
            pi4 -= 1.0 / (2 * i + 1);
        }
    }

    cout.precision(20);
    cout << "Pi = " << (pi4 * 4.) << "\n";
}

void pz2_10()
{
    int n = 0;
    cout << "Enter the size of the square: ";
    cin >> n;

    if (n < 1 || n > 20) {
        cout << "The number you entered is not in the needed range.";
    }
    else {
        int nSides = n - 2;
        cout << '+';
        for (int i = 0; i < nSides; i++)
            cout << '-';
        cout << '+' << endl;
        for (int i = 0; i < nSides; i++) {
            cout << '|';
            for (int j = 0; j < nSides; j++)
                cout << ' ';
            cout << '|' << endl;
        }
        cout << '+';
        for (int i = 0; i < nSides; i++)
            cout << '-';
        cout << '+' << endl;
    }
}

int main()
{
    pz2_6();
    pz2_7();
    pz2_10();
    return 0;
}


