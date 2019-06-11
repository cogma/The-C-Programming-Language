/* C++の参照渡しの例 */

#include <iostream>

using namespace std;

//--- 人数増加 ---//
void increment(int& no)
{
	++no;				// noの値を一つ増やす
}

int main(void)
{
	int x = 5;			// サークルxは5人

	increment(x);		// サークルxで1人増えた

	cout << "サークルxの所属人数＝" << x << '\n';

	return 0;
}
