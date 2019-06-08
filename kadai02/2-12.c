#include <stdio.h>

int main(void)
{
  int i;
  int a[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
  
  for(i=0;i<4;i++)
    scanf("%d",&a[0][i]);

  for(i=0;i<4;i++)
    scanf("%d",&a[1][i]);

  for(i=0;i<4;i++)
    scanf("%d",&a[2][i]);

  for(i=0;i<4;i++)
    scanf("%d",&a[3][i]);

  printf("%d\n",a[0][0]+a[1][1]+a[2][2]+a[3][3]);

  return 0;
}
