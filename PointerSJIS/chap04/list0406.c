/* �����̔z��̏����� */

#include <stdio.h>

int main(void)
{
	char s1[] = {'A', 'B', 'C', '\0'};
	char s2[] = {"ABC"};
	char s3[] = "ABC";

	printf("�z��s1�ɕ�����\"%s\"���i�[����Ă��܂��B\n", s1);
	printf("�z��s2�ɕ�����\"%s\"���i�[����Ă��܂��B\n", s2);
	printf("�z��s3�ɕ�����\"%s\"���i�[����Ă��܂��B\n", s3);

	return 0;
}
