//Zasieg rzutu poziomego

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()

{ 
	const double g = 9.81;
	double x = 30, v = 10; // x = k¹t
	double z = ((v*v)*(sin * 2)*(x)) / (g);

	cout << z << endl;

	system("PAUSE");
	return 0;
}