#include <stdio.h>

int main(void)
{
  int x,y,i;

  scanf("%d",&x);
  scanf("%d",&y);

  for(i=x;i<=y;i++){
    if(i%3==0&&i%5==0)
      printf("FizzBuzz\n");
    else if(i%3==0)
      printf("Fizz\n");
    else if(i%5==0)
      printf("Buzz\n");
    else
      printf("%d\n",i);
  }
  return 0;
}
    
