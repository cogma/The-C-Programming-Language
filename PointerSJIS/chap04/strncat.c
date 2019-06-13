/*--- strncat‚ÌÀŒ»—á ---*/
char *strncat(char *s1, const char *s2, size_t n)
{
	char *p = s1;

	while (*s1)					/* s1‚ğ––”ö‚Ü‚Åi‚ß‚é */
		s1++;
	while (n--) {
		if (!(*s1++ = *s2++))	/* “r’†‚É'\0'‚ª‚ ‚ê‚ÎI—¹ */
			break;
	}
	*s1 = '\0';					/* s1‚Ì––”ö‚É'\0'‚ğ“ü‚ê‚é */

	return p;
}
