/*--- memchr‚ÌŽÀŒ»—á ---*/

#include <stddef.h>

void *memchr(const void *s, int c, size_t n)
{
	unsigned char uc = c;
	const unsigned char *p = (const unsigned char *)s;

	while (n-- > 0) {
		if (*p == uc)
			return (void *)p;
		p++;
	}
	return NULL;
}
