/*
	���͂̊m�F���s���i�C���łP�j
*/

#include <ctype.h>
#include <stdio.h>

/*--- �m�F�p�֐� ---*/
int kakunin(void)
{
	int ch;

	while (isspace(ch = getchar()) && ch != EOF)
		;
	return ch;
}

int main(void)
{
	int ch;
	char name[20];

	printf("���O����͂��Ă��������F");
	scanf("%s", name);

	printf("��낵���ł����i�x�^�m�j�F");

	ch = kakunin();
 	if (ch == 'Y' || ch == 'y') {
		printf("����ɂ���%s����B\n", name);
		/* �y�����z */
	}

	return 0;
}
