/* 演習4-7の解答例 */

#include <stdio.h>

/*--- 二つの文字列s1とs2を交換する ---*/
void swap_str(char s1[], char s2[])
{
	char *temp;
	while (*s1 && *s2) {	/* 短いほうの末尾まで文字列を交換 */
		char t = *s1; *s1++ = *s2; *s2++ = t;
	}
	if (*s1) {							/* s1のほうが長ければ */
		temp = s1;
		while (*s1) { *s2++ = *s1++; }	/* s1の残りをs2にコピー */
		*temp = *s2 = '\0';
	} else if (*s2) {					/* s2のほうが長ければ */
		temp = s2;
		while (*s2) { *s1++ = *s2++; }	/* s2の残りをs1にコピー */
		*temp = *s1 = '\0';
	} else {
		*s1 = *s2 = '\0';
	}
}

int main(void)
{
	char s1[80], s2[80];

	printf("文字列S1：");	scanf("%s", s1);
	printf("文字列S2：");	scanf("%s", s2);

	swap_str(s1, s2);	/* s1とs2を交換 */

	printf("二つの文字列を交換しました。\n");
	printf("文字列S1：%s\n", s1);
	printf("文字列S2：%s\n", s2);

	return 0;
}
