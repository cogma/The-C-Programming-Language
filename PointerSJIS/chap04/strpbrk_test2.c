/* strpbrk�֐��̗��p��i���̂Q�j*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[128];
	char ultr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";	/* �p�啶�� */
	char *p;

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	puts("���̕�����Ɋ܂܂��p�啶���͈ȉ��̂Ƃ���ł��B");

	p = str;						/* ������̐擪�������w�� */

	while ((p = strpbrk(p, ultr)) != NULL)
		putchar(*p++);
	putchar('\n');

	return 0;
}
