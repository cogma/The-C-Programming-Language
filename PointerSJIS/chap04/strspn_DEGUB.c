/* strspnŠÖ”‚ÆstrcspnŠÖ”‚Ì—˜—p—á */

#include <stdio.h>
#include <string.h>

/*--- strspn‚ÌÀŒ»—á ---*/

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

/*--- strcspn‚ÌÀŒ»—á ---*/

#include <stddef.h>

size_t strcspn(const char *s1, const char *s2)
{
	const char *p = s1;

	for ( ; *s1; s1++) {
		const char *t;

		for (t = s2; *t; t++)
			if (*t == *s1)
				return s1 - p;
	}
	return s1 - p;
}

int main(void)
{
	char str[60];		/* ‚±‚Ì•¶š—ñ‚©‚ç’Tõ */
	char ltr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	unsigned n1, n2;

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
	scanf("%s", str);

	n1 = strspn( str, ltr);		/* æ“ª@‰pš•”‚Ì•¶š” */
	n2 = strcspn(str, ltr);		/* æ“ª”ñ‰pš•”‚Ì•¶š” */

	if (n1 == 0)
		printf("æ“ª‚Í‰pš‚Å‚Í‚ ‚è‚Ü‚¹‚ñB\n");
	else
		printf("æ“ª%u•¶š‚ª‰pš‚©‚ç\¬‚³‚ê‚Ä‚¢‚Ü‚·B\n", n1);

	if (n2 == 0)
		printf("æ“ª‚Í‰pš‚Å‚·B\n");
	else
		printf("æ“ª%u•¶š‚É‚Í‰pš‚ÍŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚¹‚ñB\n", n2);

	return 0;
}
