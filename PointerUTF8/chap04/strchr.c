/*--- strchrの実現例 ---*/

#include <stddef.h>

char *strchr(const char *s, int c)
{
	c = (char)c;
	while (*s != c) {
		if (*s == '\0')				/* 見つからなかった */
			return NULL;
		s++;
	}
	return (char *)s;
}
