/*
	���䎮��������ƂȂ��Ă���if���̗�
*/

#include <stdio.h>

int main(void)
{
	int a, b;

	printf("a�̒l�́F");   scanf("%d", &a);
	printf("b�̒l�́F");   scanf("%d", &b);

	if (a = b)
		printf("�� a = %d\n�� b = %d\n", a, b);
	else
		printf("�� a = %d\n�� b = %d\n", a, b);

	return 0;
}
