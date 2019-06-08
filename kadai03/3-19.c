#include <stdio.h>

int main(void)
{
  int ch,s=0;

  while((ch=getchar())!=EOF){
  if(ch=='a')
    s++;
}

  printf("%d\n",s);

return 0;
}
