#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *p[5];
 
char *substr(char *s,int j)
{
    int i = 0;
 
    p[j] = malloc(strlen(s) + 1);
    strcpy(p[j], s);
    while (p[j][i] != '\0') {
        if (p[j][i] == 'a')
            break;
        i++;
    }
 
    return p[j] + i;
}
 
int main()
{
    char buf[100] = "";
    char *s[5];
    int i;
 
    for (i = 0; i < 5; i++) {
        scanf("%99s", buf);
        s[i] = substr(buf,i);
        buf[0] = '\0';
    }
 
    for (i = 4; 0 <= i; i--) {
        printf("%s\n", s[i]);
	free(p[i]);
    }
 
    return 0;
}
