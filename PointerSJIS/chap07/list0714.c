/*--- •¶š—ñs‚Ì•¡»‚ğ¶¬‚µ‚Ä•Ô‹p ---*/
char *str_dup(const char *s)
{
	char *p = malloc(strlen(s) + 1);
	return (p == NULL) ? NULL : strcpy(p, s);
}
