//Obliczanie pierwiatkow
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	double a = 6, b = 3, c = 4;
	
	double d = b*b - 4 * a*c;

	double x1 = (-b - pow(d, 1 / 2)) / 2 * a;

	double x2 = (-b + pow(d, 1 / 2)) / 2 * a;

	cout << "Pierwsatki wynosza: x1 = "
		<< x1 << " i " << x2 << endl;

	system("pause");
	return 0;
}