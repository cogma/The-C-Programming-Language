/*
	()形式の初期化子によって初期化（Ｃ++）
*/

#include <iostream>

using namespace std;

int main(void)
{
	int x = 5;				/* xを5で初期化 */
	int y(5);				/* yを5で初期化 */

	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';

	return 0;
}
