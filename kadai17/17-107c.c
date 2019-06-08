
#include <stdio.h>
#include <stdlib.h>

int fresh(void);

const int tests[6] = {0,1,2,3,4,5};

int main() {
/* tests の各テストを実行し、結果を表示する。失敗したらexit */
  int i;
  for(i = 0; i < (int)(sizeof(tests) / sizeof(*tests)); ++i) {
    int r = fresh();
    printf("fresh(%d) = %d\n", tests[i], r);
    if(r != tests[i]) {
      printf("%d != %d\n", r, tests[i]);
      exit(1);
    }
  }
  return 0;
}
