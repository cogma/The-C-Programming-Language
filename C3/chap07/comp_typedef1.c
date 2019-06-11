/*
	typedef宣言によって構造体に名前を与える（その１）
*/

typedef struct { double re, im; } complex;

int main(void)
{
	complex a, b = {0.0};
	complex x, y = {0.0};
	complex *pa, *pb;

	a = b;			/* 正 */
	x = b;			/* 正 */
	pa = &a;		/* 正 */
	pb = &b;		/* 正 */

	return 0;
}
