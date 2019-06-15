/* ���K2-3�̉𓚗� */

#include <stdio.h>

#define swap(type, x, y)	do { type temp = x; x = y; y = temp; } while (0)

/*--- *x[0]��*x[1]��*x[2]�ƂȂ�悤�Ƀ\�[�g ---*/
void sort_ptr3ary(int *x[])
{
	if (*x[0] > *x[1]) swap(int *, x[0], x[1]);
	if (*x[1] > *x[2]) swap(int *, x[1], x[2]);
	if (*x[0] > *x[1]) swap(int *, x[0], x[1]);
}

int main(void)
{
	int n1, n2, n3;
	int *p[3] = {&n1, &n2, &n3};

	printf("����n1�F");   scanf("%d", &n1);
	printf("����n2�F");   scanf("%d", &n2);
	printf("����n3�F");   scanf("%d", &n3);

	sort_ptr3ary(p);

	printf("�\�[�g���܂����B\n");
	printf("*p[0]�̒l��%d\n", *p[0]);		/* *p[0]�̒l��\�� */
	printf("*p[1]�̒l��%d\n", *p[1]);		/* *p[1]�̒l��\�� */
	printf("*p[2]�̒l��%d\n", *p[2]);		/* *p[2]�̒l��\�� */

	return 0;
}
