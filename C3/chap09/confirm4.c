/*
	���͂̊m�F���s���i�C���łQ�j
*/

#include <ctype.h>
#include <stdio.h>

/*--- ��󔒗ޕ������P�����ǂݍ��� ---*/
int getnschar(void)
{
	int ch;

	while (isspace(ch = getchar()) && ch != EOF)
		;
	return ch;
}

/*--- �m�F�i'Y', 'y', 'N', 'n'�݂̂�ǂݍ��ށj---*/
int kakunin(void)
{
	int ch;

	while ((ch = getnschar()) != EOF) {
		if (ch == 'Y' || ch == 'y') return 1;
		if (ch == 'N' || ch == 'n') return 0;
	}

	return EOF;
}

int main(void)
{
	int ch;
	char name[20];

	printf("���O����͂��Ă��������F");
	scanf("%s", name);

	printf("��낵���ł����i�x�^�m�j�F");

	ch = kakunin();
	if (ch == 1) {
		printf("����ɂ���%s����B\n", name);
		/* �y�����z */
	}

	return 0;
}
