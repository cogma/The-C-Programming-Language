/* ��������R�s�[�i��Q�Łj*/

#include <stdio.h>

/*--- ������s��d�ɃR�s�[�i��Q�Łj---*/
char *str_copy(char *d, const char *s)
{
	char *p = d;

	while (*d++ = *s++)
		;
	return p;
}

int main(void)
{
	char tmp[16];
	char s1[16] = "ABC", s2[16], s3[16];

	printf("���������͂��Ă��������F");
	scanf("%s", tmp);

	/* s2�ɃR�s�[�����������s1�ɂ��R�s�[ */
	str_copy(s1, str_copy(s2, tmp));

	printf("������s1��\"%s\"�ł��B\n", s1);
	printf("������s2��\"%s\"�ł��B\n", s2);
	printf("������s3��\"%s\"�ł��B\n", str_copy(s3, tmp));

	return 0;
}
