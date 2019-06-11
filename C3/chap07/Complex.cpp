/*
	Ｃ++の構造体
*/

#include <iostream>

using namespace std;

struct Complex {					// Ｃ++ではComplex型となる
private:
	double  re, im;					// 実部と虚部
public:
	Complex(double r, double i)	: re(r), im(i) { }	// コンストラクタ

	double Real(void)	{ return re; }				// 実部のゲッタ
	double Image(void)	{ return im; }				// 虚部のゲッタ
};

int main(void)
{
	Complex a(0, 0);
	Complex *pa = &a;

	cout << "  a = (" << a.Real()   << ", " << a.Image()   << ")\n";

	cout << "*pa = (" << pa->Real() << ", " << pa->Image() << ")\n";

	return 0;
}