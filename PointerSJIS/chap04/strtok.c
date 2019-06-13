/*--- strtok‚ÌŽÀŒ»—á ---*/

#include <string.h>

char *strtok(char *s1, const char *s2)
{
	char   *pbegin, *pend;
	static char *save = "";

	pbegin = s1 ? s1 : save;
	pbegin += strspn(pbegin, s2);				/* strspn‚ð—˜—p */
	if (*pbegin == '\0') {
		save = "";
		return NULL;
	}

	pend = pbegin + strcspn(pbegin, s2);		/* strcspn‚ð—˜—p */
	if (*pend != '\0')
		*pend++ = '\0';
	save = pend;

	return pbegin;
}
