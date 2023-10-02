#define _USE_MATH_DEFINES
#include <stdio.h>
#include <cmath>
#include <iostream>
#include <iomanip> //заголовок для определения манипулятора setprecision
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x, y;
	char w;
	cout << "Введите значение x и букву, под которой находится нужная формула:\n a)f(x) = x^3 + 2x^2 - 3x -7; b)f(x) = sin^2(x) + cos(x) -7; c)f(x) = e^x + ln(x); d)f(x) = sqrt(x^3) + sin(x^2) + e^(-x)" << endl;
	cin >> x >> w;
	if (w == 'a') {
		y = pow(x, 3) + 2 * (pow(x, 2)) - 3 * x - 7;
		cout << "f(" << x << ") = ";
		cout << setprecision(4) << y << endl;
	}

	else if (w == 'b') {
		y = pow(sin(x), 2) + cos(x) - 7;
		cout << "f(" << x << ") = ";
		cout << setprecision(4) << y << endl;
	}

	else if (w == 'c') {
		y = pow(M_E, x) + log(x);
		cout << "f(" << x << ") = ";
		cout << setprecision(4) << y << endl;
	}

	else if (w == 'd') {
		y = sqrt(pow(x, 3)) + sin(pow(x, 2)) + pow(M_E, (-x));
		cout << "f(" << x << ") = ";
		cout << setprecision(4) << y << endl;
	}

	else {
		cout << "Неизвестная буква" << endl;
		y = NULL;
	}

	system("pause");
	return 0;
}
