/* 文字列リテラル内の文字列とアドレスを表示 */

#include <stdio.h>

int main(void)
{
	printf("文字列リテラル\"abc\"＝\"%s\"\n",       "abc");
	printf("文字列リテラル\"UVW\\0XYZ\"＝\"%s\"\n", "UVW\0XYZ");

	printf("文字列リテラル\"abc\"は%p番地に格納されています。\n", "abc");

	return 0;
}
