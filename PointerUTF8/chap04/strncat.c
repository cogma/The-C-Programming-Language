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
