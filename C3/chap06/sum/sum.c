/*
	1〜maxの和を求める関数sum（定義）
*/

int sum(int max)
{
	int i, s = 0;

	for (i = 1; i <= max; i++)
		s += i;
	return s;
}
