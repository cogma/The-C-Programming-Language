/* 文字列の配列を動的に確保（ポインタの配列）*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int	num;			/* 文字列の個数 */
	char **pt;

	printf("文字列は何個：");
	scanf("%d", &num);

	pt = (char **)calloc(num, sizeof(char *));

	if (pt == NULL) 
		puts("記憶域の確保に失敗しました。");
	else {
		int	i;

		for (i = 0; i < num; i++)
			pt[i] = NULL;

		for (i = 0; i < num; i++) {
			char temp[128];

			printf("pt[%d] : ", i);
			scanf("%s", temp);

			pt[i] = (char *)malloc(strlen(temp) + 1);

			if (pt[i] != NULL)
				strcpy(pt[i], temp);
			else {
				puts("記憶域の確保に失敗しました。");
 				goto Free;
			}
		}
		for (i = 0; i < num; i++)
			printf("pt[%d] = %s\n", i, pt[i]);
Free:
		for (i = 0; i < num; i++)
			free(pt[i]);
		free(pt);
	}

	return 0;
}
