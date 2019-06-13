/* memcpy�֐���memmove�֐��̗��p�� */

#include <stdio.h>
#include <string.h>

/*--- �z��b��n�̗v�f��a�ɃR�s�[ ---*/
int arycpy(int a[], const int b[], int n)
{
	if (n <= 0)		/* n��0�łȂ���΂Ȃ�Ȃ� */
		return 1;
	else {
		memcpy(a, b, n * sizeof(int)); 
		return 0;
	}
}

/*--- a[idx]��x��}�����Ĉȍ~�̗v�f��������炷 ---*/
int aryins(int a[], int n, int idx, int x)
{
	if (idx < 0 || idx >= n)		/* 0��idx��n�łȂ���΂Ȃ�Ȃ� */
		return 1;
	else {
		memmove(&a[idx + 1], &a[idx], (n - idx - 1) * sizeof(int)); 
		a[idx] = x;
		return 0;
	}
}

#define MAX		5		/* �z��̗v�f�� */

int main(void)
{
	int i;
	int x[MAX] = {1, 2, 3, 4, 5};
	int y[MAX] = {9, 9, 9, 9, 9};

	arycpy(y, x, MAX);		/* x�̑S�v�f��y�ɃR�s�[ */

	aryins(x, MAX, 2, 10);	/* x[2]��10��}�� */

	puts("        x   y ");
	puts("--------------");

	for (i = 0; i < MAX; i++)
		printf("[%d] :%4d%4d\n", i, x[i], y[i]);

	return 0;
}