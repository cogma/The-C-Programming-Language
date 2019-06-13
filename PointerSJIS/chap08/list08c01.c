/* 選ばれた動物の鳴き声を表示 */

#include <stdio.h>

typedef enum {Dog, Cat, Monkey, Invalid} Animal;

/*--- 犬が鳴く ---*/
void dog(void) { puts("ワンワン!!"); }

/*--- 猫が鳴く ---*/
void cat(void) { puts("ニャ～オ!!"); }

/*--- 猿が鳴く ---*/
void monkey(void) { puts("キッキッ!!"); }

/*--- 動物を選ぶ（選ばれた関数へのポインタを返却） ---*/
void (*selected_animal(void))(void)
{
	int temp;

	while (1) {
		printf("(0)…犬　(1)…猫　(2)…猿　(3)…終了：");
		scanf("%d", &temp);
		switch (temp) {
		 case Dog :     return dog;			/* 関数dogへのポインタを返却 */
		 case Cat :     return cat;			/* 関数catへのポインタを返却 */	
		 case Monkey :  return monkey;		/* 関数monkeyへのポインタを返却 */
		 case Invalid : return NULL;		/* 空ポインタを返却 */	
		}
	}
}

int main(void)
{
	while (1) {
		void (*animal)(void) = selected_animal();
		if (animal == NULL)		/* 空ポインタであれば終了 */
			break;
		animal();				/* animalが指す関数を呼び出す */
	}

	return 0;
}