/*
	C++ではregister宣言されたオブジェクトのアドレスを取得できることを確認
*/

#include <iostream>

using namespace std;

int main()
{
	register int x;

	cout << "xのアドレス = " << &x << '\n';
}
