//Obliczanie pierwiatkow
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	double a, b, c;
	cout << "y = ax * 2 + bx - c -> " << "Podaj wartosci a, b, c: " << endl;
	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	cout << "c="; cin >> c;
	
	double d = b*b - 4 * a*c;

	if (d = 0)
	{
		cout << "Delta rowna 0." << endl;
		system("pause");
		return 0;
	}

	if (d < 0)
	{
		cout << "Delta mniejsza od zera." << endl;
		system("pause");
		return 0;
	}


	double x1 = (-b - pow(d, 1 / 2)) / 2 * a;

	double x2 = (-b + pow(d, 1 / 2)) / 2 * a;

	cout << "Pierwsatki wynosza: x1 = "
		<< x1 << " i " << x2 << endl;

	system("pause");
	return 0;
}