/*--- strncat�̎����� ---*/
char *strncat(char *s1, const char *s2, size_t n)
{
	char *p = s1;

	while (*s1)					/* s1�𖖔��܂Ői�߂� */
		s1++;
	while (n--) {
		if (!(*s1++ = *s2++))	/* �r����'\0'������ΏI�� */
			break;
	}
	*s1 = '\0';					/* s1�̖�����'\0'������ */

	return p;
}
