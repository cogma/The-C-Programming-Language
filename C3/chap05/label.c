/*
	������ǂݍ���ō��v��\���i�󕶂̗��p��F���D�t�����̖{�̂Ƃ��āj
*/

#include <stdio.h>

/*--- no�̐�����ǂݍ���ō��v�l��\�� */
void sumup(int no)
{
	int sum = 0;

	printf("%d�̐�������͂��Ă��������B\n", no);
	puts("999����͂���ƒ��f���܂��B");

	while (no--) {
		int x;
		scanf("%d", &x);
		if (x == 999) goto xyz;		/* ���f */
		sum += x;
	}
	printf("���v��%d�ł��B\n", sum);
xyz:
	;								/* �� */
}

int main(void)
{
	sumup(5);

	return 0;
}
