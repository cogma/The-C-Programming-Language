#include <stdio.h>
#include <stdlib.h>

int prime_factor(int n);

/* n, prime_factor */
const int tests[][2] = {
  {123, 3},
  {34, 2},
  {3, 3},
  {6, 2},
  {133, 7},
  {28, 2},
  {299, 13},
  {307, 307}
};

int main() {
  /* tests の各テストを実行し、結果を表示する。失敗したらexit */
  int i;
  for(i = 0; i < (int)(sizeof(tests) / sizeof(*tests)); ++i) {
    int g = prime_factor(tests[i][0]);
    printf("prime_factor(%d) = %d\n", tests[i][0], g);
    if(g != tests[i][1]) {
      printf("%d != %d\n", g, tests[i][1]);
      exit(1);
    }
  }
  return 0;
}
