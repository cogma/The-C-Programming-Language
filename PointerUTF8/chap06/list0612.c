/* 日付を扱うプログラム */

#include <stdio.h>

/*--- 日付 ---*/
struct date {
	int year;		/* 年 */
	int month;		/* 月 */
	int day;		/* 日 */
};

/*--- y年は閏年か？ ---*/
int is_leap(int y)
{
	return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}

/*--- y年m月の日数 ---*/
int day_of_month(int y, int m)
{
	int mdays[][12] = {
		{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },		/* 平年 */
		{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },		/* 閏年 */
	};
	return mdays[is_leap(y)][m - 1];
}

/*--- 日付を表示 ---*/
void print_date(struct date d)
{
	int wday;			/* 曜日 */
	int y = d.year;
	int m = d.month;
	char *ws[] = {"日", "月", "火", "水", "木", "金", "土"};

	if (m == 1 || m == 2) {
		y--;
		m += 12;
	}
	wday = (y + y / 4 - y / 100 + y / 400 + (13 * m + 8) / 5 + d.day) % 7;
	printf("%04d年%02d月%02d日(%s)", d.year, d.month, d.day, ws[wday]);
}

/*--- 日付を読み込む ---*/
void scan_date(struct date *d)
{
	printf("年 : ");
	scanf("%d", &d->year);

	do {
		printf("月 : ");
		scanf("%d", &d->month);
	} while (d->month < 1 || d->month > 12);

	do {
		printf("日 : ");
		scanf("%d", &d->day);
	} while (d->day < 1 || d->day > day_of_month(d->year, d->month));
}

/*--- 日付を１日進める ---*/
void succeed(struct date *d)
{
	if (d->day < day_of_month(d->year, d->month))
		d->day++;
	else {
		if (++d->month > 12) {
			d->year++;			/* 年の繰上げ */
			d->month = 1;
		}
		d->day = 1;				/* 翌月の1日 */
	}
}

/*--- 日付を１日戻す ---*/
void precceed(struct date *d)
{
	if (d->day > 1)
		d->day--;
	else {
		if (--d->month < 1) {
			d->year--;			/* 年の繰下げ */
			d->month = 12;
		}
		d->day = day_of_month(d->year, d->month);	/* 前月の最終日 */
	}
}

/*--- 日付をn日進める ---*/
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

/*--- 日付をn日戻す ---*/
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
	struct date x = {2017, 12, 15};		/* 2017年12月15日 */

	while (1) {
		int n;
		printf("日付…");  print_date(x);  putchar('\n');

		printf("1) 日付読込み  2) 1日進める  3) 1日戻す  "
			   "4) n日進める  5) n日戻す  6) 終了：");
		scanf("%d", &menu);

		if (menu < 1 || menu >= 6) break;

		switch (menu) {
		 case 1: scan_date(&x); break;				/* 日付読込み */
		 case 2: succeed(&x); break;				/* １日進める */
		 case 3: precceed(&x); break;				/* １日戻す */
		 case 4:
		 case 5: printf("何日："); scanf("%d", &n); 
				 if (menu == 4) succeedn(&x, n);	/* ｎ日進める */ 
				 else precceedn(&x, n);				/* ｎ日戻す */ 
				 break;
		}
	}

	return 0;
}
