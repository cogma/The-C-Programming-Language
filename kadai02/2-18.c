#include <stdio.h>

int fivo(int n)
{
  int s;
  
  if(n==1||n==2)
    s=1;
  else
    s=fivo(n-1)+fivo(n-2);

  return s;
}
  

int main(void)
{
  int n;
  
  scanf("%d",&n);
  printf("%d\n",fivo(n));

  return 0;
}
  
