/* ������𓮓I�Ɋm�� */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char s[128];
	char *p;

	printf("������s����͂��Ă��������F");
	scanf("%s", s);

	p = malloc(strlen(s) + 1);		/* ������p�̋L������m�� */

	if (p) {
		strcpy(p, s);
		printf("���̕�����̃N���[��p�����܂����B\n");
		printf("s = \"%s\"\n", s);
		printf("p = \"%s\"\n", p);
		free(p);					/* �L�������� */
	}

	return 0;
}
