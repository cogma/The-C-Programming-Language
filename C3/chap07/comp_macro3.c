/*
	マクロによって構造体に名前を与える（その３：エラー）
*/

struct __comp { double re, im; };

#define complex  struct __comp
#define compptr  struct __comp *

int main(void)
{
	complex a, b;
	compptr pa, pb; 

	pa = &a;			/* 正　 */
	pb = &b;			/* 不正 */

	return 0;
}
