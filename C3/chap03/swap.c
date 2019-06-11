/*
	��̃|�C���^������
*/

#include <stdio.h>

/*--- int�^�̐����������ia���w��������b���w�������������j---*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/*--- int *�^�̃|�C���^�������ia���w���|�C���^��b���w���|�C���^�������j---*/
void swap_intptr(int **a, int **b)
{
	int *temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int x, y;
	int *p1 = &x;
	int *p2 = &y;

	puts("p1��x���w����p2��y���w���Ă��܂��B");
	printf("����x�F");   scanf("%d", &x);
	printf("����y�F");   scanf("%d", &y);

	swap_int(&x, &y);			/* �����l�ł���x�̒l��y�̒l������ */

	puts("����x��y�̒l���������܂����B");
	printf("p1���w���l��%d�ł��B\n", *p1);
	printf("p2���w���l��%d�ł��B\n", *p2);

	swap_intptr(&p1, &p2);		/* �|�C���^�ł���p1�̒l��p2�̒l������ */

	puts("�|�C���^p1��p2�̒l���������܂����B");
	printf("p1���w���l��%d�ł��B\n", *p1);
	printf("p2���w���l��%d�ł��B\n", *p2);

	return 0;
}
