/*
	《同一の先頭のメンバの並び》をもつ共用体の利用例
*/

#include <stdio.h>

/*--- 動物（犬／猫）共用体 ---*/
typedef union {
	struct {
		int type;			/* 種別 */
	} code;

	struct {
		int  type;			/* 1:犬 */
		char *name;			/* 名前 */
	} dog;

	struct {
		int    type;		/* 2:猫 */
		double weight;		/* 体重 */
	} cat;
} Animal;

/*--- 動物のデータを種別に応じて表示 ---*/
void print_animal(const Animal *x)
{
	switch (x->code.type) {
	 case 1: printf("犬。名前は%sです。\n",   x->dog.name);      break;
	 case 2: printf("猫。体重は%.1fkgです。\n", x->cat.weight);  break;
	}
} 

int main(void)
{
	Animal a, b;

	a.dog.type = 1;				/* aは犬で、	*/
	a.dog.name = "Taro";		/* 名前は"Taro"	*/

	b.cat.type   = 2;			/* bは猫で、	*/
	b.cat.weight = 3.5;			/* 体重は3.5kg	*/

	print_animal(&a);			/* aを表示 */

	print_animal(&b);			/* bを表示 */

	return 0;
}
