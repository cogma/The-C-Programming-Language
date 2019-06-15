/* ‰‰K1-5‚Ì‰ğ“š—á */

#include <stdio.h>

/*--- x‚Æy‚Ì˜a‚ğ*wa‚É·‚ğ*sa‚ÉŠi”[ ---*/
void sum_diff(int x, int y, int *wa, int *sa)
{
	*wa = x + y;						/* ˜a */
	*sa = (x > y) ? x - y : y - x;		/* · */
}

int main(void)
{
	int n1, n2;
	int sum, diff;		/* ˜a‚Æ· */ 

	printf("®”n1F");   scanf("%d", &n1);
	printf("®”n2F");   scanf("%d", &n2);

	sum_diff(n1, n2, &sum, &diff);

	printf("n1‚Æn2‚Ì˜a%d\n", sum);		/* sum‚Ì’l‚ğ•\¦ */
	printf("n1‚Æn2‚Ì·%d\n", diff);		/* diff‚Ì’l‚ğ•\¦ */

	return 0;
}
