/* memcmp関数の利用例 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("\"ABCD\\0ZZZ\"と\"ABCD\\0XYZ\"の先頭7文字を比較します。\n");

	printf("memcmp の返却値：%d\n", memcmp( "ABCD\0ZZZ", "ABCD\0XYZ", 7));
	printf("strncmpの返却値：%d\n", strncmp("ABCD\0ZZZ", "ABCD\0XYZ", 7));

	return 0;
}
