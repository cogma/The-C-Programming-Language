/*--- memsetの実現例 ---*/
void *memset(void *s, int c, size_t n)
{
	unsigned char uc = c;
	unsigned char *p = (unsigned char *)s;

	while (n-- > 0)
		*p++ = uc;

	return s;
}
