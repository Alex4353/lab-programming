#include <iostream>
#include <iomanip>
#include <cmath>
#include "windows.h"

using namespace std;

int main()
{
    int x, n = 4;
    cout << "Enter x = ";
    cin >> x;
    float rez;
    float sum = 0;
    for (int i = 1; i < 9; i++)
    {
        sum = sum + log(i * x);
    }

    rez = 2 * sum + pow(x, 5);
    cout << "Result Y =" << rez << endl; // Updated version for Git lab

    system("pause");
    return 0;
}
