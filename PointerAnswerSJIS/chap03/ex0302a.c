/* ���K3-2�̉𓚗�i�悭�Ȃ����@�j */

#include <stdio.h>

int main(void)
{
	int x[3][2][4];

	printf("�z��x��%d�~%d�~%d�̂R�����z��ł��B\n",
				(int)(sizeof(x)       / sizeof(int[2][4])),
				(int)(sizeof(x[0])    / sizeof(int[4])),
				(int)(sizeof(x[0][0]) / sizeof(int)));	

	return 0;
}
