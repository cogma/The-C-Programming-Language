/* strpbrk�֐��̗��p��i���̂P�j*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[128], s2[128];
	char *p;

	printf("������s1�F");	scanf("%s", s1);
	printf("������s2�F");	scanf("%s", s2);

	if ((p = strpbrk(s1, s2)) == NULL)
		printf("������s2���̂ǂ̕�����������s1���ɂ͑��݂��܂���B\n");
	else
		printf("������s2�Ɋ܂܂�镶���̕�����s1�ł̍ŏ��̏o���ȍ~��"
													"\"%s\"�ł��B\n", p);

	return 0;
}
