//Pierwiaski, sta³e, logarytmy, potêgi
#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	double x = 4, y = 7, c = 1/3;

	double z = sin(cos(c))*x*y*pow(x, -3) 
		+ log(2)*x +  log(10)*3*y 
		+ pow(x + y * pow(M_E, pow(M_E, (x+2))), (1/3))
		+ pow((pow(x, y)+1), 1/2 );
	
	cout << z << endl; 
	system("pause");
	return 0;
}