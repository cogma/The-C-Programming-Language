/*
	整数値どうしの商と剰余を表示
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int numer, denom;
	div_t qr;

	printf("割られる数：");  scanf("%d", &numer);
	printf("割る数：");      scanf("%d", &denom);

	qr = div(numer, denom);

 	printf("商は%dで剰余は%dです。\n", qr.quot, qr.rem);

	return 0;
}
