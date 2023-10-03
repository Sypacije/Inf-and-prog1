#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

float f1(float y) {
	return pow(y, 3) + 2 * (pow(y, 2)) - 3 * y - 7;
}

float f2(float y) {
	return pow(sin(y), 2) + cos(y) - 7;
}

float f3(float y) {
	return pow(M_E, y) + log(y);
}

float f4(float y) {
	return sqrt(pow(y, 3)) + sin(pow(y, 2)) + pow(M_E, (-y));
}

int main()
{
	setlocale(LC_ALL, "Russian");
	float x;
	int w;
	cout << "Введите значение аргумента и номер функции: " << endl;
	cin >> x >> w;
	if (w == 1) {
		cout << "f(" << x << ") = " << f1(x) << endl;
	}

	else if (w == 2) {
		cout << "f(" << x << ") = " << f2(x) << endl;
	}
	
	else if (w == 3) {
		cout << "f(" << x << ") = " << f3(x) << endl;
	}

	else if (w == 4) {
		cout << "f(" << x << ") = " << f4(x) << endl;
	}

	else {
		cout << "Ошибка. Проверьте правильность введенных данных." << endl;
	}
	
	system("pause");
	return 0;
}
