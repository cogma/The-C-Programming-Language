/*
	������Ƀi�������𖄂߂�i�ԈႢ�j
*/

#include <stdio.h>
#include <string.h>

/*--- ������str�Ƀi�������𖄂߂�i�ԈႢ�j---*/
void clear_string(char *str)
{
	memset(str, '\0', sizeof(str));
}

int main(void)
{
	int  i;
	char s[10] = "ABCDEFGHI";

	clear_string(s);

	for (i = 0; i < sizeof(s); i++)
		printf("s[%d] = %d\n", i, s[i]);

	return 0;
}
