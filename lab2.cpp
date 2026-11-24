#include <iostream>
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()

{
    double M;

    cout << "M: ";
    cin >> M;

    // cout << ((int)M / 1000) << " t" << endl;

    cout << (static_cast<int>(M) / 1000) << " t" << endl;

    return 0;
}
