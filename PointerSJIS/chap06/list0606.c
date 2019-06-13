/* 構造体を受け取る関数・返却する関数 */

#include <stdio.h>

/*--- 日付 ---*/
struct date {
	int year;		/* 年 */
	int month;		/* 月 */
	int day;		/* 日 */
};

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

/*--- y年m月d日の日付をもつ構造体を返す ---*/
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
	struct date d1 = {1999, 10, 15};	/* 1999年10月15日 */

	printf("代入前の日付 … ");
	print_date(d1);
	putchar('\n');

	printf("年 : ");   scanf("%d", &y);
	printf("月 : ");   scanf("%d", &m);
	printf("日 : ");   scanf("%d", &d);

	d1 = date_of(y, m, d);

	printf("代入後の日付 … ");
	print_date(d1);
	putchar('\n');

	return 0;
}
