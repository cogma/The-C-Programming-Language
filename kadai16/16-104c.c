#include <stdio.h>
#include <stdlib.h>

void rotate90(int p[2]);

/* p[0], p[1], next p[0], next p[1] */
const int tests[][4] = {
  {1234, 13, -13, 1234},
  {-3322, 8, -8, -3322},
  {7, -3, 3, 7},
  {-123, -100, 100, -123},
  {1000, 3, -3, 1000},
  {13, 10, -10, 13},
  {3, 10, -10, 3},
  {0, 10, -10, 0},
  {-3, 10, -10, -3},
  {-13, 10, -10, -13},
  {13, -10, 10, 13},
  {3, -10, 10, 3},
  {0, -10, 10, 0},
  {-3, -10, 10, -3},
  {-13, -10, 10, -13}
};

int main() {
  /* tests の各テストを実行し、結果を表示する。失敗したらexit */
  int i;
  for(i = 0; i < (int)(sizeof(tests) / sizeof(*tests)); ++i) {
    int p[2]={tests[i][0],tests[i][1]};
    rotate90(p);
    printf("p[0]=%d,p[1]=%dのときrotate90(p)を実行→p[0]=%d,p[1]=%d\n", tests[i][0], tests[i][1], p[0], p[1]);
    if(p[0] != tests[i][2] || p[1] != tests[i][3]) {
      printf("(%d, %d) != (%d, %d)\n", p[0], p[1], tests[i][2], tests[i][3]);
      exit(1);
    }
  }
  return 0;
}
