/*
	�����Ԃ�̕����񃊃e����
*/

#include <stdio.h>

int main(void)
{
	char *s1 = "ABC";			/* s1��"ABC"�̐擪����'A'���w�� */
	char *s2 = "ABC";			/* s2��"ABC"�̐擪����'A'���w�� */	

	*s1 = 'Z';					/* s1�̎w������������������ */

	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);

	return 0;
}
