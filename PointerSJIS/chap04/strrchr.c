/*--- strrchr‚ÌÀŒ»—á ---*/

#include <stddef.h>

char *strrchr(const char *s, int c)
{
	const char *p = NULL;			/* oŒ»ˆÊ’u */

	c = (char)c;
	while (1) {
		if (*s == c)				/* Œ©‚Â‚¯‚½ */
			p = s;
		if (*s == '\0')				/* ‘–¸I—¹ */
			break;
		s++;
	}
	return (char *)p;
}
