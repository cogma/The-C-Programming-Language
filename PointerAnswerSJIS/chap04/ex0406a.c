/* ���K4-6�̉𓚗�i�ʉ��Fisdigt�֐��𗘗p�j */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

/*--- ������s���Ɋ܂܂�鐔�������̌��𒲂ׂ� ---*/
int str_dignum(const char *s)
{
	int count = 0;

	while (*s) {
		if (isdigit(*s))
			count++;
		*s++;
	}

	return count;
}

int main(void)
{
	char str[60];		/* ���̕����񂩂�T�� */
	char tmp[60];
	int  n;				/* �����̌� */

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	if ((n = str_dignum(str)) == 0)				/* �������𒲂ׂ� */
		printf("���������͕����񒆂ɑ��݂��܂���B\n");
	else
		printf("����������%d�܂܂�܂��B\n", n);

	return 0;
}