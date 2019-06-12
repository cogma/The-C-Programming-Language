/* 選ばれた動物の鳴き声を表示（その１）*/

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
	int temp;

	do {
		printf("(0)…犬　(1)…猫　(2)…猿　(3)…終了：");
		scanf("%d", &temp);
	} while (temp < Dog || temp > Invalid);
	return temp;
}

int main(void)
{
	Animal selected;

	do {
		selected = select();	/* 動物を選ぶ */
		switch (selected) {
		 case Dog :    dog();     break;		/* 犬 */
		 case Cat :    cat();     break;		/* 猫 */
		 case Monkey : monkey();  break;		/* 猿 */
		}
	} while (selected != Invalid);

	return 0;
}
