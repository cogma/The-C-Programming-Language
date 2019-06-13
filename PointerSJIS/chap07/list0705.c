/* ポインタの型変換と境界調整 */

#include <stdio.h>

int main(void)
{
	double x;
	double *pd;

	char   *pc = &x;	/* double型オブジェクトxの先頭アドレスを指す */

	pc++;				/* アドレス値を1だけ増やす */

	pd = (double *)pc;	/* 増やされたポインタをdouble型ポインタに戻す */

	printf("pc = %p\n", pc);
	printf("pd = %p\n", pd);

	return 0;
}
