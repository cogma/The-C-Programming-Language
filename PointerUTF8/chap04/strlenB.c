/*--- strlenの実現例Ｂ ---*/

#include <stddef.h>

size_t strlen(const char *s)
{
	const char *p = s;

	while (*s)
		s++;
	return s - p;
}
