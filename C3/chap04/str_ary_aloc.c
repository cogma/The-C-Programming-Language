/*
	śńĚzńđŽIÉśŹˇé
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*--- śńsĚĄťđśŹľÄÔp ---*/
char *strdup(const char* s)
{
	char *p = malloc(strlen(s) + 1);
	return (p != NULL) ? strcpy(p, s) : NULL;
}

int main(void)
{
	int i;
	char *p[4];

	for (i = 0; i < 4; i++) {
		char temp[128];

		printf("śńF");
		scanf("%s", temp);

		p[i] = strdup(temp);			/* śńđĄť */
	}

	for (i = 0; i < 4; i++)
		printf("p[%d] = %s\n", i, p[i] ? p[i] : "NULL");

	for (i = 0; i < 4; i++)
		free(p[i]);						/* LŻćđđú */

	return 0;
}
