/*
	�����̊֐��ƃ}�N���Ƃ��g��������v���O������
*/

#include <stdio.h>

/*--- �}�N���� ---*/
#define max2(a, b)	((a) > (b) ? (a) : (b))

/*--- �֐��� ---*/
int (max2)(int a, int b)
{
	puts("�֐���max2���Ăяo����܂����B");
	return a > b ? a : b;
}

int main(void)
{
	int x, y;

	printf("x�̒l�́F");   scanf("%d", &x);
	printf("y�̒l�́F");   scanf("%d", &y);

	printf("max2(x, y) = %d\n\n", max2(x, y));		/* �}�N���� */

	printf("(max2)(x, y) = %d\n", (max2)(x, y));	/* �֐��� */

	return 0;
}
