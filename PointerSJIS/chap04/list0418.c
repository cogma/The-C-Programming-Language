/* ��������R�s�[�i��P�Łj*/

#include <stdio.h>

/*--- ������s��d�ɃR�s�[�i��P�Łj---*/
void str_copy(char d[], const char s[])
{
	int i = 0;

	while ((d[i] = s[i]) != '\0')
		i++;
}

int main(void)
{
	char str[128] = "ABC";
	char tmp[128];

	printf("������str��\"%s\"�ł��B\n", str);
	printf("�R�s�[���镶����́F");
	scanf("%s", tmp);

	/* ������tmp��str�ɃR�s�[ */
	str_copy(str, tmp);

	printf("������str��\"%s\"�ł��B\n", str);

	return 0;
}
