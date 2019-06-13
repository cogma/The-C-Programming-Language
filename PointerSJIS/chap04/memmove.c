/*--- memmove�̎����� ---*/
void *memmove(void *s1, const void *s2, size_t n)
{
	char       *p1 = (char *)s1;
	const char *p2 = (const char *)s2;

	if (p1 > p2 && p1 < p2 + n || p2 > p1 && p2 < p1 + n)
		for (p1 += n - 1, p2 += n - 1; n > 0; n--)	/* ����������R�s�[ */
			*p1-- = *p2--;
	else
		for ( ; n > 0; n--)							/* �擪������R�s�[ */
			*p1++ = *p2++;

	return s1;
}
