/* �|�C���^�l����������֐��i���j*/

#include <stdio.h>

/*--- ��̃|�C���^�������i���j ---*/
void swap(char *x, char *y)
{
	char *temp = x;
	x = y;
	y = temp;
}

int main(void)
{
	char *s1 = "ABC";
	char *s2 = "DEF";

	printf("������s1��\"%s\"�ł��B\n", s1);
	printf("������s2��\"%s\"�ł��B\n", s2);

	swap(s1, s2);

	puts("�|�C���^s1��s2���������܂����B");

	printf("������s1��\"%s\"�ł��B\n", s1);
	printf("������s2��\"%s\"�ł��B\n", s2);

	return 0;
}
