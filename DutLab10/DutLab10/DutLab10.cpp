#include <iostream> 

using namespace std;  

void lab10_1()
{
    int n[4][3] = { 
        {1, 2, 3}, 
        {4, 4, 4}, 
        {6, 7, 8}, 
        {1, 2, 3} };
    int count = 0;

    for (int i = 0; i < 4; ++i) {
        count = 0; 
        for (int j = 0; j < 3; ++j) {
            if (n[i][j] % 2 == 0) {
                count++;
            }
        }
        cout << "In row " << i << " there are " << count << " even numbers" << endl;
    }

    cout << endl;
}

void lab10_2()
{
    int n[6][4] = { 
        {1, 2, 3, 5},
        {1, 2, 3, 5}, 
        {4, 4, 4, 5}, 
        {6, 7, 8, 2}, 
        {1, 2, 3, 3}, 
        {4, 4, 4, 5} };
    int count = 0;

    for (int j = 0; j < 4; ++j) {
        count = 0;
        for (int i = 0; i < 6; ++i) {
            if (n[i][j] % 2 == 0) {
                count++;
            }
        }
        cout << "In colum " << j << " there are " << count << " even numbers" << endl;
    }

    cout << endl;
}

void lab10_3()
{
    int n[5][7] = { 
        {1, 2, 3, 5, 3, 7, 3}, 
        {4, 4, 4, 5, 6, 2, 6}, 
        {6, 7, 8, 2, 9, 2, 5}, 
        {1, 2, 3, 3, 8, 4, 9}, 
        {1, 1, 1, 1, 1, 1, 1} };
    int sum = 0;

    for (int i = 0; i < 5; ++i) {
        sum = 0;
        for (int j = 0; j < 7; ++j) {
            sum += n[i][j];
        }
        cout << "In sum of the row " << i << " is " << sum << endl;
    }

    cout << endl;
}

void lab10_4()
{
    int n[4][6] = {
        {1, 2, 3, 5, 3, 7},
        {6, 7, 8, 2, 9, 2},
        {1, 2, 3, 3, 8, 4},
        {1, 1, 1, 1, 1, 1} };
    int sum = 0;

    for (int j = 0; j < 6; ++j) {
        sum = 0;
        for (int i = 0; i < 4; ++i) {
            sum += n[i][j];
        }
        cout << "In sum of the colum " << j << " is " << sum << endl;
    }

    cout << endl;
}

void lab10_5()
{
    int n[3][4] = {
        {1, 2, 3, 5},
        {6, 7, 8, 2},
        {1, 1, 1, 1} };
    int max = n[0][0];
    int indexI = 0;
    int indexJ = 0;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (max < n[i][j]) {
                max = n[i][j];
                indexI = i + 1;
                indexJ = j + 1;
            }
        }
    }

    cout << "In matrix the maximum number is " << max << " with the index: [" << indexI << "][" << indexJ << "]" << endl;

    cout << endl;
}

void lab10_6()
{
    int n[4][7] = {
        {1, 2, 3, 5, 6, 1, 8},
        {6, 7, 8, 2, 1, 8, 4},
        {8, 9, 8, 4, 1, 10, 4},
        {1, 1, 1, 1, 0, 9, 10} };
    int min = n[0][0];
    int indexI = 0;
    int indexJ = 0;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (min > n[i][j]) {
                min = n[i][j];
                int indexI = i + 1;
                int indexJ = j + 1;
            }
        }
    }

    cout << "In matrix the minimum number is " << min << " with the index: [" << indexI << "][" << indexJ << "]" << endl;

    cout << endl;
}

void lab10_15()
{
    const int row = 3, colum = 3;
    int n[row][colum] = {
        {1, 2, 3},
        {6, 7, 8},
        {1, 2, 3}};
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < row; ++i) {
        sum1 += n[i][i];
    }

    for (int i = 0; i < row; ++i) {
        sum2 += n[i][ colum - 1 - i];
    }
    int sum = sum1 + sum2;

    cout << "In sum of the diagonal is " << sum << endl;
    

    cout << endl;
}

void lab10_15_2()
{
    const int row = 4, colum = 4;
    int sum1 = 0;
    int sum2 = 0;
    int n[row][colum];
    srand(time(nullptr));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colum; j++) {
            n[i][j] = rand() % 10;
            cout << "\t" << n[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; ++i) {
        sum1 += n[i][i];
    }

    for (int i = 0; i < row; ++i) {
        sum2 += n[i][ colum - 1 - i];
    }

    cout << "In sum of the first diagonal is " << sum1 << endl;
    cout << "In sum of the second diagonal is " << sum2 << endl;

    cout << endl;
}

int main()  
{ 
    lab10_15();
    lab10_15_2();
    return 0;
}  