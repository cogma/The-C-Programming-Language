#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cantor(double x);

static int fp_equiv(double x, double y) {
  return (isnan(x) && isnan(y)) || (x == y && signbit(x) == signbit(y));
}

/* x, cantor */
const double tests[][2] = {
  {-3.0, 0.0},
  {11.0, 1.0},
  {0.2, 0.3333333358168602},
  {0.81, 0.71875},
  {0.82, 0.75},
  {0.389, 0.5},
  {NAN, NAN}
};

int main() {
  /* tests の各テストを実行し、結果を表示する。失敗したらexit */
  int i;
  for(i = 0; i < (int)(sizeof(tests) / sizeof(*tests)); ++i) {
    double g = cantor(tests[i][0]);
    printf("cantor(%f) = %f\n", tests[i][0], g);
    if(!fp_equiv(g, tests[i][1])) {
      printf("%f != %f\n", g, tests[i][1]);
      exit(1);
    }
  }
  return 0;
}
