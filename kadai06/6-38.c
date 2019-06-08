#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000

double monte()
{
  double x;
  double y;
  int s=0;
  int i=0;

  srand((unsigned)time(NULL));
  for(i=0;i<N;i++){
    x=((double)rand())/RAND_MAX;
    y=((double)rand())/RAND_MAX;
    if(x*x+y*y<=1)
      ++s;
  }

  return 4.0*s/N;
}

int main()
{
  printf("%f\n",monte());

  return 0;
}
