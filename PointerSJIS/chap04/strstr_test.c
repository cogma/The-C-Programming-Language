/* strstr�֐��̗��p�� */

#include <stdio.h>
#include <string.h>

int main(void)
{
	int  i;
	char s1[128], s2[128];
	char *p;

	printf("������s1�F");	scanf("%s", s1);
	printf("������s2�F");	scanf("%s", s2);

	p = strstr(s1, s2);

	if (p == NULL)
		printf("������s1���ɂ͕�����s2�͑��݂��܂���B\n");
	else {
		int ofs = p - s1;
		printf("\n%s\n",  s1);				/* XXXABCDXXXXXXXXX	��\�� */
		printf("%*s|\n",  ofs, "");			/*	  |				��\�� */
		printf("%*s%s\n", ofs, "", s2);		/*	  ABCD			��\�� */
	}

	return 0;
}
