/*
	符号付き整数と符号無し整数の比較
*/

#include <stdio.h>

int main(void)
{
	int      sdata = -1;		/* 符号付き整数 */
	unsigned udata =  1;		/* 符号無し整数 */

	printf("sdata < udata すなわち -1 < 1U は ");
	if (sdata < udata)
		puts("真。");
	else
		puts("偽。");

	printf("sdata < (int)udata すなわち -1 < (int)1U は ");
	if (sdata < (int)udata)
		puts("真。");
	else
		puts("偽。");

	return 0;
}
