#include <iostream>
#include <iomanip>
#include <cmath>
#include "windows.h"

using namespace std;

int main()
{
    int x, n = 5;
    cout << "Enter x = ";
    cin >> x;
    float rez;
    float sum = 0;
    for (int i = 1; i < 6; i++)
    {
        sum = sum + log(i * x);
    }

    rez = 2 * sum + pow(x, 5);
    cout << "Y=" << rez << endl;

    system("pause");
    return 0;
}
