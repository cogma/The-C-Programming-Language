#include <stdio.h>
#include <stdlib.h>

double ffib(int n);

const double tests[][2] = {
  {5,5.0},
  {15, 610.0},
  {42, 267914296.0},
  {100, 3.54224848179262e+20},
  {1000, 4.346655768693743e+208},
  {0, 0.0},
  {1, 1.0}
};

int main() {

  int i;

  for(i = 0; i < (int)(sizeof(tests) / sizeof(*tests)); ++i) {
    double r = ffib(tests[i][0]);
    printf("ffib(%f) = %f\n", tests[i][0], r);
    if(r!=tests[i][1]) {
      printf("%f != %f\n", r, tests[i][1]);
      exit(1);
    }
  }
  return 0;
}
