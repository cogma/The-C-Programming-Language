/* strcat関数とstrncat関数の利用例 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[16];
	char *x = "ABC";

	strcpy(s, "QWE");	/* sは"QWE"となる */
	strcat(s, "RTY");	/* sは"QWERTY"となる */
	printf("s = %s\n", s);

	strcpy(s, x);	strncat(s, "123", 1);		printf("s = %s\n", s);

	strcpy(s, x);	strncat(s, "123", 3);		printf("s = %s\n", s);

	strcpy(s, x);	strncat(s, "123", 5);		printf("s = %s\n", s);

	strcpy(s, x);	strncat(s, "12345", 5);		printf("s = %s\n", s);

	strcpy(s, x);	strncat(s, "123456789", 5);	printf("s = %s\n", s);

	return 0;
}
