/* ������̔�r�i�ԈႢ�j*/

#include <stdio.h>

int main(void)
{
	char s[10];

	printf("���������͂��Ă��������F");
	scanf("%s", s);

	if (s == "ABC")
		puts("���Ȃ���\"ABC\"�Ɠ��͂��܂����ˁB");		  /* ���s����Ȃ� */
	else
		puts("���Ȃ���\"ABC\"�Ɠ��͂��܂���ł����ˁB");  /* ���s����� */

	return 0;
}
