/* ���K4-3 */

#include <stdio.h>

int main(void)
{
	char *p = "ABCD";
	char *q;
	q = p;

	printf("�|�C���^p���w��������\"%s\"�̃A�h���X��%p�ł��B\n", p, p);
	printf("�|�C���^p���w��������\"%s\"�̃A�h���X��%p�ł��B\n", q, q);

	return 0;
}
