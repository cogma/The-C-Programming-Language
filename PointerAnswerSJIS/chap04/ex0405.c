/* ���K4-5�̉𓚗� */

#include <stdio.h>
#include <string.h>

/*--- ������s���Ɋ܂܂�镶��c�̌��𒲂ׂ� ---*/
int str_chnum(const char *s, int c)
{
	int count = 0;

	while (*s)
		if (*s++ == c)
			count++;

	return count;
}

int main(void)
{
	char str[60];		/* ���̕����񂩂�T�� */
	char tmp[60];
	int  ch;			/* �T������ */
	int  n;				/* �����̌� */

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	printf("�T�������́F");
	scanf("%s", tmp);			/* �������񕶎���Ƃ��ēǂݍ���� */
	ch = tmp[0];				/* ���̍ŏ��̕�����T�������Ƃ��� */

	
	if ((n = str_chnum(str, ch)) == 0)				/* �������𒲂ׂ� */
		printf("����'%c'�͕����񒆂ɑ��݂��܂���B\n", ch);
	else
		printf("����'%c'��%d�܂܂�܂��B\n", ch, n);

	return 0;
}