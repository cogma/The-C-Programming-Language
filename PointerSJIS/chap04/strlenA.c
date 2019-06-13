/*--- strlen‚ÌŽÀŒ»—á‚` ---*/

#include <stddef.h>

size_t strlen(const char *s)
{
	size_t len = 0;		/* ’·‚³ */

	while (*s++)
		len++;
	return len;
}
