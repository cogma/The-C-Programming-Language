/* ������̔z��𓮓I�ɐ��� */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*--- ������s�̕����𐶐����ĕԋp ---*/
char *str_dup(const char *s)
{
	char *p = malloc(strlen(s) + 1);
	return (p == NULL) ? NULL : strcpy(p, s);
}

int main(void)
{
	int  num;			/* ������̌� */
	char **p;

	printf("������͉��F");
	scanf("%d", &num);

	p = calloc(num, sizeof(char *));

	if (p == NULL) 
		puts("�L����̊m�ۂɎ��s���܂����B");
	else {
		int i;

		for (i = 0; i < num; i++)
			p[i] = NULL;

		for (i = 0; i < num; i++) {
			char temp[128];

			printf("p[%d] : ", i);
			scanf("%s", temp);

			p[i] = strdup(temp);		/* ������𕡐� */

			if (p[i] == NULL) {
				puts("�L����̊m�ۂɎ��s���܂����B");
 				goto Free;
			} else 
				strcpy(p[i], temp);
		}
		for (i = 0; i < num; i++)
			printf("p[%d] = %s\n", i, p[i]);
Free:
		for (i = 0; i < num; i++)
			free(p[i]);					/* �L�������� */
		free(p);
	}
	return 0;
}
