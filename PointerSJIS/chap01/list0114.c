/* ��̐����l�������Ƀ\�[�g */

#include <stdio.h>

/*--- *x��*y�̒l������ ---*/
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/*--- *n1��*n2�ƂȂ�悤�Ƀ\�[�g ---*/
void sort2(int *n1, int *n2)
{
	if (*n1 > *n2)
		swap(n1, n2);	/* *n1�̒l��*n2�̒l������ */
}

int main(void)
{
	int a, b;

	puts("��̐�������͂��Ă��������B");
	printf("�����`�F");   scanf("%d", &a);
	printf("�����a�F");   scanf("%d", &b);

	sort2(&a, &b);		/* a��b�ƂȂ�悤�Ƀ\�[�g */

	puts("�����Ƀ\�[�g���܂����B");
	printf("�`�̒l��%d�ł��B\n", a);
	printf("�a�̒l��%d�ł��B\n", b);

	return 0;
}
