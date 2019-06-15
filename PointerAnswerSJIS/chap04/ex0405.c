/* ‰‰K4-5‚Ì‰ğ“š—á */

#include <stdio.h>
#include <string.h>

/*--- •¶š—ñs’†‚ÉŠÜ‚Ü‚ê‚é•¶šc‚ÌŒÂ”‚ğ’²‚×‚é ---*/
int str_chnum(const char *s, int c)
{
	int count = 0;

	while (*s)
		if (*s++ == c)
			count++;

	return count;
}

int main(void)
{
	char str[60];		/* ‚±‚Ì•¶š—ñ‚©‚ç’Tõ */
	char tmp[60];
	int  ch;			/* ’T‚·•¶š */
	int  n;				/* •¶š‚ÌŒÂ” */

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", str);

	printf("’T‚·•¶š‚ÍF");
	scanf("%s", tmp);			/* ‚¢‚Á‚½‚ñ•¶š—ñ‚Æ‚µ‚Ä“Ç‚İ‚ñ‚Å */
	ch = tmp[0];				/* ‚»‚ÌÅ‰‚Ì•¶š‚ğ’Tõ•¶š‚Æ‚·‚é */

	
	if ((n = str_chnum(str, ch)) == 0)				/* •¶š”‚ğ’²‚×‚é */
		printf("•¶š'%c'‚Í•¶š—ñ’†‚É‘¶İ‚µ‚Ü‚¹‚ñB\n", ch);
	else
		printf("•¶š'%c'‚Í%dŒÂŠÜ‚Ü‚ê‚Ü‚·B\n", ch, n);

	return 0;
}