/*
	������Ƀi�������𖄂߂�
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	int  i;
	char s[10] = "ABCDEFGHI";

	memset(s, '\0', sizeof(s));	/* �z��s�̑S�v�f��0�ɂ��� */

	for (i = 0; i < sizeof(s); i++)
		printf("s[%d] = %d\n", i, s[i]);

	return 0;
}
