/* ��������̐����̉ۂɂ���Ĕz��v�f�̒l�����ʕ\���i�֐��ւ̃|�C���^�Łj*/

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/*--- ���т͗�[�a�F70�`79�_]���H ---*/
int isB(int x)
{
	return x >= 70 && x <= 79;
}

/*--- ���т͗D[�`�F80�`100]�܂��͉�[�b�F60�`69]���H ---*/
int isAorC(int x)
{
	return (x >= 80 && x <= 100) || (x >= 60 && x <= 69);
}

/*--- �z��a�̒��Ŋ֐�fit(x)�̕ԋp�l��1�ƂȂ�v�f�����ʕ\�� ---*/
void put_list(const int a[], int n, int fit(int))
{
	int i;

	for (i = 0; i < n; i++) {
		if (fit(a[i]))
			printf("��");
		else
			printf("  ");
		printf("a[%d] = %d\n", i, a[i]);
	}
}

int main()
{
	int i;
	int a[10];							/* �_�� */
	int n = sizeof(a) / sizeof(a[0]);	/* �v�f�� */

	srand(time(NULL));			/* �����̎�������� */

	for (i = 0; i < n; i++)
		a[i] = rand() % 101;	/* 0�`100�̗������� */

	puts("��----------");
	put_list(a, n, isB);		/* �ǂ̓_���Ɂ���t���ĕ\�� */

	puts("\n�D�܂��͉�--");
	put_list(a, n, isAorC);		/* �D�܂��͉̓_���Ɂ���t���ĕ\�� */

	return 0;
}
