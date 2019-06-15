/* ‰‰K4-6‚Ì‰ğ“š—á */

#include <stdio.h>
#include <string.h>

/*--- •¶š—ñs’†‚ÉŠÜ‚Ü‚ê‚é”š•¶š‚ÌŒÂ”‚ğ’²‚×‚é ---*/
int str_dignum(const char *s)
{
	int count = 0;

	while (*s) {
		if (*s >= '0' && *s <= '9')
			count++;
		*s++;
	}

	return count;
}

int main(void)
{
	char str[60];		/* ‚±‚Ì•¶š—ñ‚©‚ç’Tõ */
	char tmp[60];
	int  n;				/* •¶š‚ÌŒÂ” */

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", str);

	if ((n = str_dignum(str)) == 0)				/* •¶š”‚ğ’²‚×‚é */
		printf("”š•¶š‚Í•¶š—ñ’†‚É‘¶İ‚µ‚Ü‚¹‚ñB\n");
	else
		printf("”š•¶š‚Í%dŒÂŠÜ‚Ü‚ê‚Ü‚·B\n", n);

	return 0;
}