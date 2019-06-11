/*
	•¶š—ñ‚ğ•\¦‚·‚é
*/

#include <stdio.h>

/*--- •¶š—ñ‚ğ‚P•¶š‚¸‚Â‘–¸‚µ‚Ä•\¦ ---*/
void putstr(const char s[])
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		putchar(s[i]);
}

int main(void)
{
	char str[128];

	printf("•¶š—ñ‚ğ“ü—Í‚¹‚æF");
	scanf("%s", str);

	putstr(str);
	putchar('\n');

	return 0;
}
