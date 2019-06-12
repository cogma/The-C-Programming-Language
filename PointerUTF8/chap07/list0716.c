/* 文字列の配列を動的に生成 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*--- 文字列sの複製を生成して返却 ---*/
char *str_dup(const char *s)
{
	char *p = malloc(strlen(s) + 1);
	return (p == NULL) ? NULL : strcpy(p, s);
}

int main(void)
{
	int  num;			/* 文字列の個数 */
	char **p;

	printf("文字列は何個：");
	scanf("%d", &num);

	p = calloc(num, sizeof(char *));

	if (p == NULL) 
		puts("記憶域の確保に失敗しました。");
	else {
		int i;

		for (i = 0; i < num; i++)
			p[i] = NULL;

		for (i = 0; i < num; i++) {
			char temp[128];

			printf("p[%d] : ", i);
			scanf("%s", temp);

			p[i] = strdup(temp);		/* 文字列を複製 */

			if (p[i] == NULL) {
				puts("記憶域の確保に失敗しました。");
 				goto Free;
			} else 
				strcpy(p[i], temp);
		}
		for (i = 0; i < num; i++)
			printf("p[%d] = %s\n", i, p[i]);
Free:
		for (i = 0; i < num; i++)
			free(p[i]);					/* 記憶域を解放 */
		free(p);
	}
	return 0;
}
