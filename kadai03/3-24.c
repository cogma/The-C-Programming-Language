#include <stdio.h>
 
int main(int argc, char *argv[])
{
    char s[100] = "";
    char t[100]="";
    int i;
 
    scanf("%99s", s);
    scanf("%99s",t);
    
    for(i=0;i<100;i++){
      if (s[i] != t[i])
	break;
    }

    if(i==100)
      puts("OK");
    else
        puts("NG");
 
    return 0;
}
