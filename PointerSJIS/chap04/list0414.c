/* ������̒��������߂�i��P�Łj*/

#include <stdio.h>

/*--- ������s�̒��������߂�i��P�Łj---*/
int str_length(const char s[])
{
	int len = 0;	/* ���� */

	while (s[len] != '\0')
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
