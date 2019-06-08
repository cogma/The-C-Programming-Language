#include <stdio.h>
#include <stdlib.h>

int fib(int n);

/* n, fib */
const int tests[][] = {
  {5, 5},
  {15, 610},
  {0, 1},
  {3, 2},
  {1, 1},
  {42, 267914296}
};

int main() {
  /* tests の各テストを実行し、結果を表示する。失敗したらexit */
  int i;
  for(i = 0; i < (int)(sizeof(tests) / sizeof(*tests)); ++i) {
    int g = fib(tests[i][0]);
    printf("fib(%d) = %d\n", tests[i][0], g);
    if(g != tests[i][1]) {
      printf("%d != %d\n", g, tests[i][1]);
      exit(1);
    }
  }
  return 0;
}
