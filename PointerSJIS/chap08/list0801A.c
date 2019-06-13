/* ��������̐����̉ۂɂ���Ĕz��v�f�̒l�����ʕ\���i���̂Q�j */

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

/*--- �֐�isB, isAorC�̕ԋp�l���^�i��0�j�ł���z��a�̗v�f�����ʕ\�� ---*/
void put_list(const int a[], int n, int sw)
{
	int i;

	for (i = 0; i < n; i++) {
		int flag;
		switch (sw) {
		 case 0: flag = isB(a[i]);		break;	/* ��[�a]���H */
		 case 1: flag = isAorC(a[i]);	break;	/* �D[�`]�܂��͉�[�b]���H */
		}
		if (flag)
			printf("�� ");
		else
			printf("   ");
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
	put_list(a, n, 0);			/* ��[�a]�Ɂ���t���Ĉꗗ�\�� */

	puts("\n�D�܂��͉�--");
	put_list(a, n, 1);			/* �D[�`]�܂��͉�[�b]�̓_���Ɂ���t���Ĉꗗ�\�� */

	return 0;
}
