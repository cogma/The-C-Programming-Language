/* �j����\���p�P��̕\���i�Q�����z��Łj*/

#include <stdio.h>

/*--- �j���ɑΉ����镶�����Ԃ��i�Q�����z��Łj---*/
char *weekstr(int wd)
{
	static char wstr[][10] = {
		"Sunday", "Monday", "Tuesday", "Wednesday",
		"Thursday", "Friday", "Saturday"
	};
	return (wd >= 0 && wd < 7) ? wstr[wd] : NULL;
}

int main(void)
{
	int n;
	int retry;

	puts("�j����\���p�P���\�����܂��B");

	do {
		printf("0-���j���^1-���j���^�c�^6-�y�j���F");
		scanf("%d", &n);

		if (n >= 0 && n < 7)
			printf("�p��ł�%s�ł��B\n", weekstr(n));

		printf("������x�H�@0-�������^1-�͂��F");
		scanf("%d", &retry);
	} while (retry == 1);

	return 0;
}
