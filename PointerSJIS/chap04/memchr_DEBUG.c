/* memchr�֐��̗��p�� */

#include <stdio.h>
#include <string.h>

/*--- memchr�̎����� ---*/

#include <stddef.h>

void *memchr(const void *s, int c, size_t n)
{
	unsigned char uc = c;
	const unsigned char *p = (const unsigned char *)s;

	while (n-- > 0) {
		if (*p == uc)
			return (void *)p;
		p++;
	}
	return NULL;
}

int main(void)
{
	char m[] = "1234567890\0ABCDEFGHIJKLMNOPQRSTUVWXYZ";	/* ���̗̈悩��T�� */
	char tmp[60];
	int  ch;			/* �T������ */
	char *p;

	printf("�T�������́F");
	scanf("%s", tmp);			/* �������񕶎���Ƃ��ēǂݍ���� */
	ch = tmp[0];				/* ���̍ŏ��̕�����T�������Ƃ��� */

	if ((p = memchr(m, ch, sizeof(m))) == NULL)				/* �擪�̏o����T�� */
		printf("����'%c'�͑��݂��܂���B\n", ch);
	else
		printf("����'%c'��%ld�����ڂɑ��݂��܂��B\n", ch, (long)(p - m));

	return 0;
}
