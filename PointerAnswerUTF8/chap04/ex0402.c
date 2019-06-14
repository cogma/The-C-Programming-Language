/* 演習4-2 */

#include <stdio.h>

int main(void)
{
	char str[15];

	printf("文字列を入力してください：");
	scanf("%s", &str);							/* 誤り */

	printf("あなたは\"%s\"と入力しましたね。\n", str);

	return 0;
}
