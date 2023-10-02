#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    float a, b, p;
    cin >> a >> b;
    p = 2 * (a + b);
    cout << "P = " << p << endl;
    cout << "S = " << (a * b) << endl;
    system("pause");
    return 0;
}