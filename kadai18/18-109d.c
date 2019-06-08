#include <stdio.h>
#include <stdlib.h>

int maxof2(int x, int y) {
  if(x < y) return y;
  else return x;
}
int maxof3(int x, int y, int z);

/* x, y, z, maxof3 */
const int tests[][4] = {
  {123, 287, 41, 287},
  {34, 55, 1, 55},
  {0, 3, 3, 3},
  {3, 0, 300, 300},
  {1, 133, 1, 133},
  {28, 64, 4, 64},
  {3, 1, 5, 5},
  {-1, -10, -100, -1},
  {-1, 2, 54321, 54321}
};

int main() {
  /* tests の各テストを実行し、結果を表示する。失敗したらexit */
  int i;
  for(i = 0; i < (int)(sizeof(tests) / sizeof(*tests)); ++i) {
    int g = maxof3(tests[i][0], tests[i][1], tests[i][2]);
    printf("maxof3(%d, %d, %d) = %d\n", tests[i][0], tests[i][1], tests[i][2], g);
    if(g != tests[i][3]) {
      printf("%d != %d\n", g, tests[i][3]);
      exit(1);
    }
  }
  return 0;
}
