/* memchr�֐��̗��p�� */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char m[] = "1234567890\0ABCDEFGHIJKLMNOPQRSTUVWXYZ";	/* ���̗̈悩��T�� */
	char tmp[128];
	int  ch;			/* �T������ */
	char *p;

	printf("�T�������́F");
	scanf("%s", tmp);			/* �������񕶎���Ƃ��ēǂݍ���� */
	ch = tmp[0];				/* ���̍ŏ��̕�����T�������Ƃ��� */

	if ((p = memchr(m, ch, sizeof(m))) == NULL)				/* �擪�̏o����T�� */
		printf("����'%c'�͑��݂��܂���B\n", ch);
	else
		printf("����'%c'��%ld�����ڂɑ��݂��܂��B\n", ch, (long)(p - m) + 1);

	return 0;
}
