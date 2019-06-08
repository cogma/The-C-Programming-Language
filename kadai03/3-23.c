#include <stdio.h>
 
int main(int argc, char *argv[])
{
    char s[100] = "";
    char t[]="yes";
    int i;
 
    scanf("%99s", s);
    
    for(i=0;i<100;i++){
      if (s[i] != t[i])
	break;
    }

    if(i==4)
      puts("OK");
    else
        puts("NG");
 
    return 0;
}
