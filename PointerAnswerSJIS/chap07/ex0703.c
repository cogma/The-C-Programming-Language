/* ���K7-3�̉𓚗� */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*--- ������s�̕�������� ---*/
char *str_dup(const char *s)
{
	char *p = malloc(strlen(s) + 1);
	return (p == NULL) ? NULL : strcpy(p, s);
}

int main(void)
{
	char s[128];
	char *p;

	printf("������s����͂��Ă��������F");
	scanf("%s", s);

	if ((p = str_dup(s)) != NULL) {		/* ������𕡐� */
		printf("���̕�����̃N���[��p�����܂����B\n");
		printf("s = \"%s\"\n", s);
		printf("p = \"%s\"\n", p);
		free(p);						/* �L�������� */
	}
}
