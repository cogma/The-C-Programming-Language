/* C++�̎Q�Ɠn���̗� */

#include <iostream>

using namespace std;

//--- �l������ ---//
void increment(int& no)
{
	++no;				// no�̒l������₷
}

int main(void)
{
	int x = 5;			// �T�[�N��x��5�l

	increment(x);		// �T�[�N��x��1�l������

	cout << "�T�[�N��x�̏����l����" << x << '\n';

	return 0;
}
