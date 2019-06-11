/*
	���f���iC++�j
*/

#include <iostream>

using namespace std;
class Complex {							// ���f���N���X
	double	re, im;
public:
	// �R���X�g���N�^
	Complex(double r, double i = 0.0) : re(r), im(i)
	{
	}

	double real() const { return re; }		// ������Ԃ�
	double imag() const { return im; }		// ������Ԃ�

	// ...
};

//--- �o�̓X�g���[��s��x��}�� ---//
inline std::ostream& operator<<(std::ostream& s, const Complex& x)
{
	return s << '(' << x.real() << ", " << x.imag() << ')';
}

int main()
{
	Complex a(5.2, 7.5);		// �錾�w�F�Q�̈���
	Complex b(5.2);				// �錾�x�F�P�̈���	

	cout << "a = " << a << '\n';
	cout << "b = " << b << '\n';
}