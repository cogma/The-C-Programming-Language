#include <stdio.h>

int gcd(int x,int y)
{
  int s;
  
  if(x==y)
    s=x;
  else if(x<y)
    s=gcd(x,y-x);
  else
    s=gcd(x-y,y);

  return s;
}

int main(int argc, char *argv[])
{
    int x = 1, y = 1;
 
    scanf("%d%d", &x, &y);
 
    printf("%d\n", gcd(x, y));
 
    return 0;
}
  
