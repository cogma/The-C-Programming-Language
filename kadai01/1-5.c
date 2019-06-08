#include <stdio.h>

int main(void)
{
  int n1,n2,n3,n4,max1,max2,max;

  scanf("%d",&n1);
  scanf("%d",&n2);
  scanf("%d",&n3);
  scanf("%d",&n4);

  max1=(n1>n2)?n1:n2;
  max2=(n3>n4)?n3:n4;
  max=(max1>max2)?max1:max2;

  printf("%d\n",max);

  return 0;
}
