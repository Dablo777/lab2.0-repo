#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846  // Оголошуємо значення M_PI, якщо його немає
#endif

using namespace std;
int main()
{
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	double alpha; // вхідний параметр

	cout << "alpha = "; cin >> alpha;

	z1 = 2 * pow(sin(3 * M_PI - 2 * alpha), 2) * pow(cos(5 * M_PI + 2 * alpha), 2);

	z2 = (1.0 / 4.0) - (1.0 / 4.0) * sin((5.0 / 2.0) * M_PI - 8 * alpha);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
//зміна 1
//main change 1
//зміна віддалений репозиторій