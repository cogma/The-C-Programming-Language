/* strcat関数とstrncat関数の利用例 */

#include <stdio.h>
#include <string.h>

/*--- strcatの実現例 ---*/
char *strcat(char *s1, const char *s2)
{
	char *p = s1;

	while (*s1)					/* s1を末尾まで進める */
		s1++;
	while (*s1++ = *s2++)		/* s2に'\0'が見つかるまでコピー */
		;
	return p;
}

/*--- strncatの実現例 ---*/
char *strncat(char *s1, const char *s2, size_t n)
{
	char *p = s1;

	while (*s1)					/* s1を末尾まで進める */
		s1++;
	while (n--) {
		if (!(*s1++ = *s2++))	/* 途中に'\0'があれば終了 */
			break;
	}
	*s1 = '\0';					/* s1の末尾に'\0'を入れる */

	return p;
}


int main(void)
{
	char s[10];
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