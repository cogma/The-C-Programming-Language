/*
	�ǂݍ��񂾕�����̕����𓮓I�ɐ�������
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*--- ������s�̕����𐶐����ĕԋp ---*/
char *strdup(const char* s)
{
	char *p = malloc(strlen(s) + 1);
	return (p != NULL) ? strcpy(p, s) : NULL;
}

int main(void)
{
	char st[128];
	char *pt;

	printf("������st����͂��Ă��������F");
	scanf("%s", st);

	if (pt = strdup(st)) {
		printf("st = %s\n", st);
		printf("pt = %s\n", pt);
		free(pt);					/* �L�������� */
	}

	return 0;
}
