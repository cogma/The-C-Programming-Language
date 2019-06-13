/* ”Ä—püŒ`’TõŠÖ” */

#include <stdlib.h>

/*--- base‚ªw‚·—v‘f‚Ì‘å‚«‚³‚ªsize‚Å—v‘f”‚ªnmemb‚Ì”z—ñ‚©‚çkey‚Æˆê’v‚·‚é—v‘f‚ğ
	  ”äŠrŠÖ”compar‚ğ—p‚¢‚ÄüŒ`’Tõ ---*/
void *seqsearch(const void *key, const void *base, size_t nmemb, size_t size,
				int (*compar)(const void *, const void *))
{
	size_t i;
	char   *x = (char *)base;

	for (i = 0; i < nmemb; i++)
		if (!compar(key, (const void *)&x[i * size]))
			return &x[i * size];		/* ’Tõ¬Œ÷ */
	return NULL;						/* ’Tõ¸”s */
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

	printf("%dŒÂ‚Ì®”‚ğ“ü—Í‚¹‚æB\n", nx);
	for (i = 0; i < nx; i++) {
		printf("x[%d] : ", i);
		scanf("%d", &x[i]);
	}

	printf("’Tõ‚·‚é’lF");
	scanf("%d", &no);

	p = seqsearch(&no, x, nx, sizeof(int), (int (*)(const void *, const void*))int_cmp);

	if (p != NULL)
		printf("x[%d]‚ªˆê’v‚µ‚Ü‚·B\n", (int)(p - x));
	else
		puts("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½B");

	return 0;
}