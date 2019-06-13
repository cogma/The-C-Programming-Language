/* memcmp�֐��̗��p�� */

#include <stdio.h>
#include <stddef.h>

/*--- memcmp�̎�����F<sttdef.h>�̃C���N���[�h���K�v ---*/
int memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	 *p1 = (const unsigned char *)s1;
	const unsigned char	 *p2 = (const unsigned char *)s2;

	while (n-- > 0) {
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

int main(void)
{
	printf("\"ABCD\\0ZZZ\"��\"ABCD\\0XYZ\"�̐擪7�������r���܂��B\n");

	printf("memcmp �̕ԋp�l�F%d\n", memcmp( "ABCD\0ZZZ", "ABCD\0XYZ", 7));
	printf("strncmp�̕ԋp�l�F%d\n", strncmp("ABCD\0ZZZ", "ABCD\0XYZ", 7));

	return (0);
}
