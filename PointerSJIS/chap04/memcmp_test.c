/* memcmp�֐��̗��p�� */

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("\"ABCD\\0ZZZ\"��\"ABCD\\0XYZ\"�̐擪7�������r���܂��B\n");

	printf("memcmp �̕ԋp�l�F%d\n", memcmp( "ABCD\0ZZZ", "ABCD\0XYZ", 7));
	printf("strncmp�̕ԋp�l�F%d\n", strncmp("ABCD\0ZZZ", "ABCD\0XYZ", 7));

	return 0;
}
