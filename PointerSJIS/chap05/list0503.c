/* �s�Q�����z��Łt������̔z����̌X�̕������\���i��Q�Łj*/

#include <stdio.h>

/*--- �Q�����z����̊e��������P�������������ĕ\���i��Q�Łj---*/
void put_string_array(const char (*s)[5], int n)
{
	int i, j;

	for (i = 0; i < n; i++) {
		printf("s[%d] = \"", i);
		for (j = 0; (*s)[j] != '\0'; j++)
			putchar((*s)[j]);
		printf("\"\n");
		s++;
	}
}

int main(void)
{
	char a[][5] = {"LISP", "C", "Ada"};
	int na = sizeof(a) / sizeof(a[0]);		/* �v�f�� */

	put_string_array(a, na);

	return 0;
}
