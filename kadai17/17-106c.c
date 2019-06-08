#include <stdio.h>
#include <stdlib.h>

int mystrlen(const char *s);

struct testcase {
  const char *s;
  int result;
};

const struct testcase tests[] = {
  {"app", 3},
  {"pine", 4},
  {"foo\0bar", 3},
  {"string", 6},
  {"desert", 6},
  {"compliment", 10},
  {"", 0},
  {"kiwi", 4}
};

int main() {
  /* tests の各テストを実行し、結果を表示する。失敗したらexit */
  int i;
  for(i = 0; i < (int)(sizeof(tests) / sizeof(*tests)); ++i) {
    int r = mystrlen(tests[i].s);
    printf("mystrlen(\"%s\") = %d\n", tests[i].s, r);
    if(r != tests[i].result) {
      printf("%d != %d\n", r, tests[i].result);
      exit(1);
    }
  }
  return 0;
}
