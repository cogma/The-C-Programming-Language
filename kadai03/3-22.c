#include <stdio.h>

void put_stringn(char s[])
{
  int i = 0, j = 0,k=0;

	while (s[i])
		i++;
	i--;

	char t[100] = "";

	while (s[j]) {
		t[i - j] = s[j];
		j++;
	}
	
	while(t[k])
	  putchar(t[k++]);
}

int main(void)
{
	char s[100];

	scanf("%s", s);

	put_stringn(s);
	printf("\n");

	return 0;
}
