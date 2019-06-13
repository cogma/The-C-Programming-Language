/* ”Ä—p‚Q•ª’TõŠÖ”ibsearchŠÖ”‚ğŠg’£j*/

#include <stdlib.h>

/*--- base‚ªw‚·—v‘f‚Ì‘å‚«‚³‚ªsize‚Å—v‘f”‚ªnmemb‚Ì”z—ñ‚©‚çkey‚Æˆê’v‚·‚é—v‘f‚ğ
	  ”äŠrŠÖ”compar‚ğ—p‚¢‚Ä‚Q•ª’Tõ
	  ¦ key‚Æ“™‚µ‚¢—v‘f‚ª•¡”‘¶İ‚·‚éê‡‚ÍÅ‚àæ“ª‚Ì—v‘f‚ğ’T‚· ---*/
void *binsearchx(const void *key, const void *base, size_t nmemb, size_t size,
				 int (*compar)(const void *, const void *))
{
	if (nmemb > 0) {
		size_t pl = 0;							/* ’Tõ”ÍˆÍæ“ª‚Ì“Yš */
		size_t pr = nmemb - 1;					/* ’Tõ”ÍˆÍ––”ö‚Ì“Yš */
		size_t pc;								/* ’Tõ”ÍˆÍ’†‰›‚Ì“Yš */
		char   *x = (char *)base;

		while (1) {
			int comp = compar(key, (const void *)&x[(pc = (pl+pr)/2) * size]);

			if (comp == 0) { 				/* ’Tõ¬Œ÷ */
				for ( ; pc > pl; pc--)		/* key‚Æ“™‚µ‚¢æ“ª‚Ì—v‘f‚ğ’T‚· */
					if (compar((const void *)&x[(pc - 1) * size], key))
						break;
				return &x[pc * size];
			} else if (pl == pr)				/* ’Tõ”ÍˆÍ‚ª‚È‚­‚È‚Á‚½ */
				break;			
			else if (comp > 0)
				pl = pc + 1;					/* ’Tõ”ÍˆÍ‚ğŒã”¼‚Éi‚è‚Ş */
			else
				pr = pc - 1;					/* ’Tõ”ÍˆÍ‚ğ‘O”¼‚Éi‚è‚Ş */
		}
	}
	return NULL;								/* ’Tõ¸”s */
}

#include <stdio.h>

/*--- ®”‚ğ”äŠr‚·‚éŠÖ” ---*/
int int_cmp(const int *a, const int *b)
{
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}

int main(void)
{
	int i, no, *p; 
	int x[8];
	int nx = sizeof(x) / sizeof(x[0]);	/* x‚Ì—v‘f” */

	printf("%dŒÂ‚Ì®”‚ğ¸‡‚É“ü—Í‚¹‚æB\n", nx);
	i = 0;
	printf("x[%d] : ", i);
	scanf("%d", &x[i]);
	for (i = 1; i < nx; i++) {
		do {
			printf("x[%d] : ", i);
			scanf("%d", &x[i]);
		} while (x[i] < x[i - 1]);
	}

	printf("’Tõ‚·‚é’lF");
	scanf("%d", &no);

	p = binsearchx(&no, x, nx, sizeof(int),
							(int (*)(const void *, const void *))int_cmp);

	if (p != NULL)
		printf("x[%d]‚ªˆê’v‚µ‚Ü‚·B\n", (int)(p - x));
	else
		puts("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½B");

	return 0;
}
