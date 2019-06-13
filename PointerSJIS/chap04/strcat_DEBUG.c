/* strcat�֐���strncat�֐��̗��p�� */

#include <stdio.h>
#include <string.h>

/*--- strcat�̎����� ---*/
char *strcat(char *s1, const char *s2)
{
	char *p = s1;

	while (*s1)					/* s1�𖖔��܂Ői�߂� */
		s1++;
	while (*s1++ = *s2++)		/* s2��'\0'��������܂ŃR�s�[ */
		;
	return p;
}

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


int main(void)
{
	char s[10];
	char *x = "ABC";

	strcpy(s, "QWE");	/* s��"QWE"�ƂȂ� */
	strcat(s, "RTY");	/* s��"QWERTY"�ƂȂ� */
	printf("s = %s\n", s);

	strcpy(s, x);	strncat(s, "123", 1);		printf("s = %s\n", s);

	strcpy(s, x);	strncat(s, "123", 3);		printf("s = %s\n", s);

	strcpy(s, x);	strncat(s, "123", 5);		printf("s = %s\n", s);

	strcpy(s, x);	strncat(s, "12345", 5);		printf("s = %s\n", s);

	strcpy(s, x);	strncat(s, "123456789", 5);	printf("s = %s\n", s);

	return 0;
}