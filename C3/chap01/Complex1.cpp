/*
	複素数（C++）
*/

#include <iostream>

using namespace std;
class Complex {							// 複素数クラス
	double	re, im;
public:
	// コンストラクタ
	Complex(double r, double i = 0.0) : re(r), im(i)
	{
	}

	double real() const { return re; }		// 実部を返す
	double imag() const { return im; }		// 虚部を返す

	// ...
};

//--- 出力ストリームsにxを挿入 ---//
inline std::ostream& operator<<(std::ostream& s, const Complex& x)
{
	return s << '(' << x.real() << ", " << x.imag() << ')';
}

int main()
{
	Complex a(5.2, 7.5);		// 宣言Ｘ：２個の引数
	Complex b(5.2);				// 宣言Ｙ：１個の引数	

	cout << "a = " << a << '\n';
	cout << "b = " << b << '\n';
}