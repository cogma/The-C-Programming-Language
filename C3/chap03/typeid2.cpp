/*
	�z���|�C���^�̌^����\��
*/

#include <iostream>
#include <typeinfo>

using namespace std;

void func(int d1[], int d2[][3], int d3[][4][3])
{
	cout << "d1�F" << typeid(d1).name() << '\n';
	cout << "d2�F" << typeid(d2).name() << '\n';
	cout << "d3�F" << typeid(d3).name() << '\n';
}

int main()
{
	int n;
	int* p1;
	int** p2;
	int a1[3];
	int a2[4][3];
	int a3[5][4][3];

	cout << "n   �F" << typeid(n).name()    << '\n';
	cout << "&n  �F" << typeid(&n).name()   << '\n';
	cout << "*&n �F" << typeid(*&n).name()  << '\n';
	cout << "p1  �F" << typeid(p1).name()   << '\n';
	cout << "*p1 �F" << typeid(*p1).name()  << '\n';
	cout << "p2  �F" << typeid(p2).name()   << '\n';
	cout << "*p2 �F" << typeid(*p2).name()  << '\n';
	cout << "**p2�F" << typeid(**p2).name() << '\n';

	cout << "a1    �F" << typeid(a1).name()     << '\n';
	cout << "&a1[0]�F" << typeid(&a1[0]).name() << '\n';

	cout << "a2       �F" << typeid(a2).name()        << '\n';
	cout << "&a2[0]   �F" << typeid(&a2[0]).name()    << '\n';
	cout << "&a2[0][0]�F" << typeid(&a2[0][0]).name() << '\n';

	cout << "a3          �F" << typeid(a3).name()           << '\n';
	cout << "&a3[0]      �F" << typeid(&a3[0]).name()       << '\n';
	cout << "&a3[0][0]   �F" << typeid(&a3[0][0]).name()    << '\n';
	cout << "&a3[0][0][0]�F" << typeid(&a3[0][0][0]).name() << '\n';

	func(a1, a2, a3);
}
