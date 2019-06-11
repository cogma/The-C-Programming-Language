/*
	マクロによって構造体に名前を与える（その２）
*/

struct __comp { double re, im; };

#define complex  struct __comp

int main(void)
{
	complex a, b;
	complex x, y;

	a = b;			/* 正 */
	x = b;			/* 正 */

	return 0;
}
