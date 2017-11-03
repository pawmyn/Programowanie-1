//Nowe zadanie
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x = 4, y = 7, c = 1/3;

	double z = sin(cos(c))*x*y*pow(x, -3);
	cout << z << endl; 
	system("pause");
	return 0;
}