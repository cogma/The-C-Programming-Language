/* �z��ƃ|�C���^�̑傫����\�� */

#include <stdio.h>

/*--- �󂯎�����|�C���^�̑傫����\�� ---*/
void func(int p[])
{
	printf("sizeof(p) = %u\n", (unsigned)sizeof(p));	/* �|�C���^ */
}

int main(void)
{
	int a[5];

	printf("sizeof(a) = %u\n", (unsigned)sizeof(a));	/* �z�� */

	func(a);

	return 0;
}
