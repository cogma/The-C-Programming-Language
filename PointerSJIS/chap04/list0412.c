/* ������̑���ƘA���i�ԈႢ�j*/

#include <stdio.h>

int main(void)
{
	char s1[256], s2[256];

	s1 = "ABC";					/* �G���[�F����͂ł��Ȃ� */
	s2 = s1 + "DEF";			/* �G���[�F�A���͂ł��Ȃ� */

	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);

	return 0;
}
