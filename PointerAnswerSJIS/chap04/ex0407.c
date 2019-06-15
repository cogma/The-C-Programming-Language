/* ���K4-7�̉𓚗� */

#include <stdio.h>

/*--- ��̕�����s1��s2���������� ---*/
void swap_str(char s1[], char s2[])
{
	char *temp;
	while (*s1 && *s2) {	/* �Z���ق��̖����܂ŕ���������� */
		char t = *s1; *s1++ = *s2; *s2++ = t;
	}
	if (*s1) {							/* s1�̂ق���������� */
		temp = s1;
		while (*s1) { *s2++ = *s1++; }	/* s1�̎c���s2�ɃR�s�[ */
		*temp = *s2 = '\0';
	} else if (*s2) {					/* s2�̂ق���������� */
		temp = s2;
		while (*s2) { *s1++ = *s2++; }	/* s2�̎c���s1�ɃR�s�[ */
		*temp = *s1 = '\0';
	} else {
		*s1 = *s2 = '\0';
	}
}

int main(void)
{
	char s1[80], s2[80];

	printf("������S1�F");	scanf("%s", s1);
	printf("������S2�F");	scanf("%s", s2);

	swap_str(s1, s2);	/* s1��s2������ */

	printf("��̕�������������܂����B\n");
	printf("������S1�F%s\n", s1);
	printf("������S2�F%s\n", s2);

	return 0;
}
