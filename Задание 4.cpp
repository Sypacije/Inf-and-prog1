#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, res1, res2, res, dg;
	cout << "Введите значение переменных a и b: ";
	cin >> a >> b;
	dg = -((pow(a, 2) + M_E) / (pow(a, 3) + b));
	res1 = pow(M_E, dg) * (1.7 * pow(a, 2) + pow(b, 3));
	res2 = sin(b + pow(a, 2)) + cos((1.92 * b) / a);
	res = sqrt(res1 / res2);
	cout << "Значение выражения для переменных a и b равно: " << res << endl;
	system("pause");
	return 0;
}

