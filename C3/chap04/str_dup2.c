/*
	“Ç‚İ‚ñ‚¾•¶š—ñ‚Ì•¡»‚ğ“®“I‚É¶¬‚·‚é
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*--- •¶š—ñs‚Ì•¡»‚ğ¶¬‚µ‚Ä•Ô‹p ---*/
char *strdup(const char* s)
{
	char *p = malloc(strlen(s) + 1);
	return (p != NULL) ? strcpy(p, s) : NULL;
}

int main(void)
{
	char st[128];
	char *pt;

	printf("•¶š—ñst‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", st);

	if (pt = strdup(st)) {
		printf("st = %s\n", st);
		printf("pt = %s\n", pt);
		free(pt);					/* ‹L‰¯ˆæ‚ğ‰ğ•ú */
	}

	return 0;
}
