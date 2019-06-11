/*
	インライン関数max2の利用例（Ｃ++）
*/

#include <iostream>
#include "max2_inline.h"

using namespace std;

int main()
{
	int x, y;

	cout << "xの値は：";   cin >> x;
	cout << "yの値は：";   cin >> y;

	cout << "max2(x, y) = " << max2(x, y) << '\n';

	return 0;
}
