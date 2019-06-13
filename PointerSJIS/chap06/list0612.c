/* ���t�������v���O���� */

#include <stdio.h>

/*--- ���t ---*/
struct date {
	int year;		/* �N */
	int month;		/* �� */
	int day;		/* �� */
};

/*--- y�N�͉[�N���H ---*/
int is_leap(int y)
{
	return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}

/*--- y�Nm���̓��� ---*/
int day_of_month(int y, int m)
{
	int mdays[][12] = {
		{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },		/* ���N */
		{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },		/* �[�N */
	};
	return mdays[is_leap(y)][m - 1];
}

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

/*--- ���t��ǂݍ��� ---*/
void scan_date(struct date *d)
{
	printf("�N : ");
	scanf("%d", &d->year);

	do {
		printf("�� : ");
		scanf("%d", &d->month);
	} while (d->month < 1 || d->month > 12);

	do {
		printf("�� : ");
		scanf("%d", &d->day);
	} while (d->day < 1 || d->day > day_of_month(d->year, d->month));
}

/*--- ���t���P���i�߂� ---*/
void succeed(struct date *d)
{
	if (d->day < day_of_month(d->year, d->month))
		d->day++;
	else {
		if (++d->month > 12) {
			d->year++;			/* �N�̌J�グ */
			d->month = 1;
		}
		d->day = 1;				/* ������1�� */
	}
}

/*--- ���t���P���߂� ---*/
void precceed(struct date *d)
{
	if (d->day > 1)
		d->day--;
	else {
		if (--d->month < 1) {
			d->year--;			/* �N�̌J���� */
			d->month = 12;
		}
		d->day = day_of_month(d->year, d->month);	/* �O���̍ŏI�� */
	}
}

/*--- ���t��n���i�߂� ---*/
void succeedn(struct date *d, int n)
{
	void precceedn(struct date *d, int n);

	if (n < 0)
		precceedn(d, -n);
	else if (n > 0) {
		int dom;
		d->day += n;
		while (d->day > (dom = day_of_month(d->year, d->month))) {
			d->day -= dom;
			if (++d->month > 12) {
				d->year++;
				d->month = 1;
			}
		}
	}
}

/*--- ���t��n���߂� ---*/
void precceedn(struct date *d, int n)
{
	if (n < 0)
		succeedn(d, -n);
	else if (n > 0) {
		d->day -= n;
		while (d->day < 1) {
			if (--d->month < 1) {
				d->year--;
				d->month = 12;
			}
			d->day += day_of_month(d->year, d->month);
		}
	}
}

int main(void)
{
	int menu;
	struct date x = {2017, 12, 15};		/* 2017�N12��15�� */

	while (1) {
		int n;
		printf("���t�c");  print_date(x);  putchar('\n');

		printf("1) ���t�Ǎ���  2) 1���i�߂�  3) 1���߂�  "
			   "4) n���i�߂�  5) n���߂�  6) �I���F");
		scanf("%d", &menu);

		if (menu < 1 || menu >= 6) break;

		switch (menu) {
		 case 1: scan_date(&x); break;				/* ���t�Ǎ��� */
		 case 2: succeed(&x); break;				/* �P���i�߂� */
		 case 3: precceed(&x); break;				/* �P���߂� */
		 case 4:
		 case 5: printf("�����F"); scanf("%d", &n); 
				 if (menu == 4) succeedn(&x, n);	/* �����i�߂� */ 
				 else precceedn(&x, n);				/* �����߂� */ 
				 break;
		}
	}

	return 0;
}
