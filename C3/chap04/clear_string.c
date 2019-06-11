/*
	文字列にナル文字を埋める
*/

#include <stdio.h>
#include <string.h>

/*--- 文字列strにナル文字をno個埋める ---*/
void clear_string(char *str, int no) 
{
	memset(str, '\0', no);
}

int main(void)
{
	int  i;
	char s[10] = "ABCDEFGHI";

	clear_string(s, sizeof(s));

	for (i = 0; i < sizeof(s); i++)
		printf("s[%d] = %d\n", i, s[i]);

	return 0;
}