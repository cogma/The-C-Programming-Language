/*--- strchr‚ÌŽÀŒ»—á ---*/

#include <stddef.h>

char *strchr(const char *s, int c)
{
	c = (char)c;
	while (*s != c) {
		if (*s == '\0')				/* Œ©‚Â‚©‚ç‚È‚©‚Á‚½ */
			return NULL;
		s++;
	}
	return (char *)s;
}
