/*
	《配列による文字列》と《ポインタによる文字列》
*/

#include <stdio.h>

int main(void)
{
	char ary[] = "ABC";	  /* 配列による文字列 */
	char *ptr  = "XYZ";	  /* ポインタによる文字列 */

	printf("ary = %s\n", ary);
	printf("ptr = %s\n", ptr);

	return 0;
}
