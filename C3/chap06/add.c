/*
	�����l�����Z�����l��\���i�Â��X�^�C���j
*/

#include <stdio.h>

/*--- x��y�̘a�����߂� ---*/
int add(x, y)
int x, y;
{
	return x + y;
}

main()
{
	int x, y;

	printf("�����l����͂���F");	scanf("%d", &x);
	printf("�����l����͂���F");	scanf("%d", &y);

	printf("�����̘a��%d�ł��B\n", add(x, y));
}
