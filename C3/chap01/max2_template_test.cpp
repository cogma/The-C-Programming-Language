/*
	�֐��e���v���[�gmax2�𗘗p����v���O�����i�b++�j
*/

#include <iostream>

#include "max2_template.h"

using namespace std;

int main(void)
{
	int a, b;
	double x, y;

	cout << "����a�̒l�F";   cin >> a;
	cout << "����b�̒l�F";   cin >> b;
	cout << "����x�̒l�F";   cin >> x;
	cout << "����y�̒l�F";   cin >> y;

	cout << "max2(a, b) = " << max2(a, b) << '\n';
	cout << "max2(x, y) = " << max2(x, y) << '\n';

	return 0;
}
