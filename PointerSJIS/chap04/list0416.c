/* ������̒��������߂�i��R�Łj*/

#include <stdio.h>

/*--- ������s�̒��������߂�i��R�Łj---*/
int str_length(const char *s)
{
	const char *p = s;

	while (*s)
		s++;
	return s - p;
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
