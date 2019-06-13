/*--- strpbrk‚ÌŽÀŒ»—á ---*/

#include <stddef.h>

char *strpbrk(const char *s1, const char *s2)
{
	for ( ; *s1; s1++) {
		const char *t = s2;
		for ( ; *t; t++)
			if (*t == *s1)					/* Œ©‚Â‚¯‚½ */
				return (char *)s1;
	}
	return NULL;
}
