/* 選ばれた動物の鳴き声を表示（その２：関数へのポインタの配列）*/

#include <stdio.h>

typedef enum {Dog, Cat, Monkey, Invalid} Animal;

/*--- 犬が鳴く ---*/
void dog(void)
{
	puts("ワンワン!!");
}

/*--- 猫が鳴く ---*/
void cat(void)
{
	puts("ニャ～オ!!");
}

/*--- 猿が鳴く ---*/
void monkey(void)
{
	puts("キッキッ!!");
}

/*--- 動物を選ぶ ---*/
Animal select(void)
{
	int tmp;

	do {
		printf("(0)…犬　(1)…猫　(2)…猿　(3)…終了：");
		scanf("%d", &tmp);
	} while (tmp < Dog || tmp > Invalid);
	return tmp;
}

int main(void)
{
	typedef void (*AnimalFP)(void);
	Animal selected;
	AnimalFP afp[] = {dog, cat, monkey};

	do {
		selected = select();	/* 動物を選ぶ */
		if (selected >= Dog && selected < Invalid)
			afp[selected]();
	} while (selected != Invalid);

	return 0;
}

