/* ��̐����l�������i���j*/

#include <stdio.h>

/*--- x��y�̒l�������i���j---*/
void swap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main(void)
{
	int a, b;

	puts("��̐�������͂��Ă��������B");
	printf("�����`�F");   scanf("%d", &a);
	printf("�����a�F");   scanf("%d", &b);

	swap(a, b);		/* a��b�̒l�������i�H�j*/

	puts("�����`�Ƃa�̒l���������܂����B");
	printf("�`�̒l��%d�ł��B\n", a);
	printf("�a�̒l��%d�ł��B\n", b);

	return 0;
}
