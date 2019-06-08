#include <stdio.h>

int main(void)
{
  int x,y,z;

  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&z);

  if(x==y&&x==z)
    printf("A\n");
  else if(x!=y&&y!=z&&z!=x)
    printf("C\n");
  else
    printf("B\n");

  return 0;
}
      
