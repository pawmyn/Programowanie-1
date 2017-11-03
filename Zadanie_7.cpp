//Nowe zadanie
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	double x = 4, y = 7, c = 1/3, z;
	const double M_E;

	double z = sin(cos(c))*x*y*pow(x, -3) + log(2)*x +  log(10)*3*y + 
		pow(((x + (pow(y*M_E))), (x+2)), (1/3)) ;
	cout << z << endl; 
	system("pause");
	return 0;
}