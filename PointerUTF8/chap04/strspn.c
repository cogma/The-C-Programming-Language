/*--- strspnの実現例 ---*/

#include <stddef.h>

size_t strspn(const char *s1, const char *s2)
{
	const char *p = s1;

	for ( ; *s1; s1++) {
		const char *t;

		for (t = s2; *t != *s1; t++)
			if (*t == '\0')
				return s1 - p;
	}
	return s1 - p;
}
