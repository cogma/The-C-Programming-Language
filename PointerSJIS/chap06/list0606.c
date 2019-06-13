/* �\���̂��󂯎��֐��E�ԋp����֐� */

#include <stdio.h>

/*--- ���t ---*/
struct date {
	int year;		/* �N */
	int month;		/* �� */
	int day;		/* �� */
};

/*--- ���t��\�� ---*/
void print_date(struct date d)
{
	int wday;			/* �j�� */
	int y = d.year;
	int m = d.month;
	char *ws[] = {"��", "��", "��", "��", "��", "��", "�y"};

	if (m == 1 || m == 2) {
		y--;
		m += 12;
	}
	wday = (y + y / 4 - y / 100 + y / 400 + (13 * m + 8) / 5 + d.day) % 7;
	printf("%04d�N%02d��%02d��(%s)", d.year, d.month, d.day, ws[wday]);
}

/*--- y�Nm��d���̓��t�����\���̂�Ԃ� ---*/
struct date date_of(int y, int m, int d)
{
	struct date temp;

	temp.year  = y;
	temp.month = m;
	temp.day   = d;
	return temp;
}


int main(void)
{
	struct date xday;
	int y, m, d;
	struct date d1 = {1999, 10, 15};	/* 1999�N10��15�� */

	printf("����O�̓��t �c ");
	print_date(d1);
	putchar('\n');

	printf("�N : ");   scanf("%d", &y);
	printf("�� : ");   scanf("%d", &m);
	printf("�� : ");   scanf("%d", &d);

	d1 = date_of(y, m, d);

	printf("�����̓��t �c ");
	print_date(d1);
	putchar('\n');

	return 0;
}
