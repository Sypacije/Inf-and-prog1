#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int f = 1;
	int ds;
	float x, y, res;
	char op;
	cout << "\nIf you want to calculate sin, cos, sqrt or ln please type 1.\nIf you want to calculate +, -, * please type 2." << endl;
	cin >> ds;

	if (ds == 1) {
		cout << "\nInput operator, x:\n";
		cout << "\nUse s for sin, c for cos, t for sqrt, l for ln.\n";
		cin >> op >> x;
	}

	else if (ds == 2) {
		cout << "\nInput x, operator, y:\n";
		cin >> x >> op >> y;
	}

	else {
		cout << "Unknown number" << endl;
		f = 0;
		op = NULL;
		system("pause");
		return 1;
	}

	switch (op)
	{
	    case '+': res = x + y; break;
	    case '-': res = x - y; break;
		case '*': res = x * y; break;
		case 's': res = sin(x); y = NULL; break;
		case 'c': res = cos(x); y = NULL; break;
		case 't': res = sqrt(x); y = NULL; break;
		case 'l': res = log(x); y = NULL; break;
		default: cout << "Unknown operator" << endl;
		f = 0; break;
	}
	if (f == 1 and op == 's') {
		cout << "sin(" << x << ")" << " = " << res << endl;
	}

	else if (f == 1 and op == 'c') {
		cout << "cos(" << x << ")" << " = " << res << endl;
	}

	else if (f == 1 and op == 't') {
		cout << "sqrt(" << x << ")" << " = " << res << endl;
	}

	if (f == 1 and op == 'l') {
		cout << "ln(" << x << ")" << " = " << res << endl;
	}

	else if (f == 1 and op != 'c' and op != 's' and op != 'l' and op != 't') {
		cout << x << op << y << " = " << res << endl;
	}

	system("pause");
	return 0;
}