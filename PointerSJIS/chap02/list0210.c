/* �z��̗v�f����\�� */

#include <stdio.h>

int main(void)
{
	int a[5];

	printf("a�̗v�f����%u�ł��B\n", (unsigned)(sizeof(a) / sizeof(a[0])));

	return 0;
}
