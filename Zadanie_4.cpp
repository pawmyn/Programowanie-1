//hmax - rzut ukosny 

#define _USE_MATH DEFINES
#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	const double g = 9.81; // stala
	double v0, x;
	cout << "Podaj Vo: ";
	cin >> v0;
	cout << "Podaj kat sin: ";
	cin >> x;

	double y = sin(x); // x - kat 
	double hmax = (v0*v0*y*y) / (2 * g); // wzor 

	cout << "Wzniesie sie na hmax = " << hmax << endl;

	system("pause");
	return 0;
}
