/*--- strchr�̎����� ---*/

#include <stddef.h>

char *strchr(const char *s, int c)
{
	c = (char)c;
	while (*s != c) {
		if (*s == '\0')				/* ������Ȃ����� */
			return NULL;
		s++;
	}
	return (char *)s;
}
