
#include <cmath>
#include <iostream>

#define M_PI 3.141592653589793288456

using namespace std;

int main()
{
    double a = 2, b = 12, c = 3, d = 11.05, resultOne, resultTwo;

    resultOne = (0.5 * (log(a) + log(b))) / sqrt(cos(sqrt(a + b) + exp(a)) * (M_PI / 6)); 

    resultTwo = (1 - cos(sqrt(c) / d * M_PI)) / ((0.5 * exp(c)) + (0.312 * exp(d))); 

    cout << resultOne << endl;
    cout << resultTwo << endl;
    return 0;
}


