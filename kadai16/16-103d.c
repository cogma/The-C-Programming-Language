#include <stdio.h>
#include <stdlib.h>

int maxof2(int x, int y);

/* x, y, 期待される戻り値 */
const int tests[][3] = {
  {-2, 0, 0},
  {-4, -5, -4},
  {1, -5, 1},
  {-1, 0, 0},
  {-1, -1, -1},
  {-1, 3, 3},
  {4, -3, 4},
  {-3, -5, -3},
  {-2, -5, -2},
  {4, 3, 4},
  {-1, -2, -1},
  {-2, 1, 1}
};

int main() {
  /* tests の各テストを実行し、結果を表示する。失敗したらexit */
  int i;
  for(i = 0; i < (int)(sizeof(tests) / sizeof(*tests)); ++i) {
    int m = maxof2(tests[i][0], tests[i][1]);
    printf("maxof2(%d, %d) = %d\n",
        tests[i][0], tests[i][1], m);
    if(m != tests[i][2]) {
      printf("%d != %d\n", m, tests[i][2]);
      exit(1);
    }
  }
  return 0;
}