/*
	���l�𕶎���Ƃ��ēǂݍ���ŕ\���i���ǔŁj
*/

#include <ctype.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/*--- �������int�^�̒l�ɕϊ� ---*/
int strtoi(const char *str, int *err)
{
	int no = 0;
	int sign = 1; 				/* ���� */
	div_t int_min = div(INT_MIN, 10);

	int_min.rem *= -1;			/* �����𔽓] */
	*err = 2;

	while (isspace(*str))		/* �󔒗ޕ�����ǂݔ�΂� */
		str++;

	switch (*str) {
	 case '+' : str++;              break;		/* ������ */
	 case '-' : str++;  sign = -1;  break;		/* ������ */
	}

	for ( ; isdigit(*str); str++) {
		if ((no < int_min.quot) || 
            (no == int_min.quot && *str - '0' > int_min.rem)) {
			no = INT_MIN;
			goto Overflow;
		}
		no = no * 10 - (*str - '0');
	}
	if (sign == 1) {
		if (no < -INT_MAX) {
			no = INT_MAX;
			goto Overflow;
		}
		no = -no;
	}
	*err = *str ? 1 : 0;
Overflow:
	return no;
}

int main(void)
{
	int  num, err;
	char buffer[100];

	while (1) {
		printf("�����l����͂���F");
		scanf("%s", buffer);

		num = strtoi(buffer, &err);
		if (err)
			puts("\a�����l�ɕϊ��ł��܂���ł����B");
		else {
			if (num == 9999)
				break;
		 	printf("���Ȃ���%d�Ɠ��͂��܂����ˁB\n", num);
		}
	}
	return 0;
}
