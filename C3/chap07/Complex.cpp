/*
	�b++�̍\����
*/

#include <iostream>

using namespace std;

struct Complex {					// �b++�ł�Complex�^�ƂȂ�
private:
	double  re, im;					// �����Ƌ���
public:
	Complex(double r, double i)	: re(r), im(i) { }	// �R���X�g���N�^

	double Real(void)	{ return re; }				// �����̃Q�b�^
	double Image(void)	{ return im; }				// �����̃Q�b�^
};

int main(void)
{
	Complex a(0, 0);
	Complex *pa = &a;

	cout << "  a = (" << a.Real()   << ", " << a.Image()   << ")\n";

	cout << "*pa = (" << pa->Real() << ", " << pa->Image() << ")\n";

	return 0;
}