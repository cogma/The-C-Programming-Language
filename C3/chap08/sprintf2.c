/*
	�����l���w�肳�ꂽ�����̕�����ɕϊ�
*/

#include <stdio.h>

int main(void)
{
	int	   n1, n2;
	double x;
	char   buf[256];

	printf("�����l����͂��Ă��������F");
	scanf("%lf", &x);

	printf("���Ȃ��Ƃ������̕�����ɕϊ����܂����F");
	scanf("%d", &n1);

	printf("���̂����������͉����ł����F");
	scanf("%d", &n2);

	sprintf(buf, "%*.*f", n1, n2, x);

	printf("�ϊ���̕������\"%s\"�ł��B\n", buf);

	return 0;
}
