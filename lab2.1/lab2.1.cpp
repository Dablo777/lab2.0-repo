#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846  // ��������� �������� M_PI, ���� ���� ����
#endif

using namespace std;
int main()
{
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	double alpha; // ������� ��������

	cout << "alpha = "; cin >> alpha;

	z1 = 2 * pow(sin(3 * M_PI - 2 * alpha), 2) * pow(cos(5 * M_PI + 2 * alpha), 2);

	z2 = (1.0 / 4.0) - (1.0 / 4.0) * sin((5.0 / 2.0) * M_PI - 8 * alpha);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
//���� 1
//main change 1
//���� ��������� ����������