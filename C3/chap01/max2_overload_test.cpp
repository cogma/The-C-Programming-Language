/*
	多重定義された関数max2の利用例（Ｃ++）
*/

#include <iostream>
#include "max2_overload.h"

using namespace std;

int main()
{
	int a, b;
	double x, y;

	cout << "整数aの値：";   cin >> a;
	cout << "整数bの値：";   cin >> b;
	cout << "実数xの値：";   cin >> x;
	cout << "実数yの値：";   cin >> y;

	cout << "max2(a, b) = " << max2(a, b) << '\n';
	cout << "max2(x, y) = " << max2(x, y) << '\n';

	return 0;
}
