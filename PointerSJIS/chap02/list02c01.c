/* �I�u�W�F�N�g�̋L������ԂƏ����� */

#include <stdio.h>

int ft = 0;					/* �ÓI�L������� */

void func(void)
{
	static int st = 0;		/* �ÓI�L������� */
	int        at = 0;		/* �����L������� */

	ft++;
	st++;
	at++;
	printf("ft = %d  st = %d  at = %d\n", ft, st, at);
}

int main(void)
{
	int i;

	for (i = 0; i < 8; i++)
		func();

	return 0;
}
