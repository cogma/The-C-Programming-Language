/* �������\���i�ʉ��j */

#include <stdio.h>

/*--- ������s��\���i�ʉ��j---*/
void put_str(const char *s)
{
	while (*s) {
		putchar(*s);
		s++;
	}
}

int main(void)
{
	char str[128];

	printf("���������͂��Ă��������F");
	scanf("%s", str);

	put_str(str);
	putchar('\n');

	return 0;
}
