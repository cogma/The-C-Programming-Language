/* printf�֐���scanf�֐��̗��p�� */

#include <stdio.h>

int main(void)
{
	int  n;
	long k;
	char s[20];

	printf("����n����͂���F");
	scanf("%d", &n);				/* int�^10�i���̓Ǎ��݁F&���K�v */

	printf("����k����͂���F");
	scanf("%ld", &k);				/* long�^10�i���̓Ǎ��݁F&���K�v */

	printf("������s����͂���F");
	scanf("%s", s);					/* ������̓Ǎ��݁F&���s�v */

	printf("���� n �̒l��%d�ł��B\n",  n);		/* &�͕s�v */
	printf("���� k �̒l��%ld�ł��B\n", k);		/* &�͕s�v */
	printf("������s�̒l��%s�ł��B\n",  s);		/* &�͕s�v */

	return 0;
}
