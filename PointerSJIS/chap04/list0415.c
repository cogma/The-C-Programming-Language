/* ������̒��������߂�i��Q�Łj*/

#include <stdio.h>

/*--- ������s�̒��������߂�i��Q�Łj---*/
int str_length(const char *s)
{
	int len = 0;	/* ���� */

	for ( ; *s != '\0'; s++)
		len++;
	return len;
}

int main(void)
{
	char str[128];

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	printf("������\"%s\"�̒�����%d�ł��B\n",
					 str, str_length(str));

	return 0;
}
