/* �����񃊃e�������̕�����ƃA�h���X��\�� */

#include <stdio.h>

int main(void)
{
	printf("�����񃊃e����\"abc\"��\"%s\"\n",       "abc");
	printf("�����񃊃e����\"UVW\\0XYZ\"��\"%s\"\n", "UVW\0XYZ");

	printf("�����񃊃e����\"abc\"��%p�Ԓn�Ɋi�[����Ă��܂��B\n", "abc");

	return 0;
}
