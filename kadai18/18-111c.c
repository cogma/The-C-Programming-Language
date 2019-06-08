#include <stdio.h>
#include <stdlib.h>

// 符号なし128bit整数をあらわすデータ型
typedef struct myuint128 {
  // 下位64bit
  unsigned long digit0;
  // 上位64bit
  unsigned long digit1;
} myuint128_t;

// 等号
int eq128(myuint128_t a, myuint128_t b) {
  return a.digit0 == b.digit0 && a.digit1 == b.digit1;
}

// 乗算
myuint128_t mul128(myuint128_t a, myuint128_t b) {
  unsigned long digit0, digit1, digit1f, digit1l;
  unsigned long carry, pre;

  __asm__("mulld %0, %1, %2"
      // %0 = digit0 に出力する
      : "=r"(digit0)
      // %1 = a.digit0, %2 = b.digit0 にあらかじめ値を入れておく
      : "r"(a.digit0), "r"(b.digit0));
  __asm__("mulld %0, %1, %2"
      // %0 = digit1f に出力する
      : "=r"(digit1f)
      // %1 = a.digit1, %2 = b.digit0 にあらかじめ値を入れておく
      : "r"(a.digit1), "r"(b.digit0));
  __asm__("mulld %0, %1, %2"
      // %0 = digit1l に出力する
      : "=r"(digit1l)
      // %1 = a.digit0, %2 = b.digit1 にあらかじめ値を入れておく
      : "r"(a.digit0), "r"(b.digit1));
  __asm__("mulhdu %0, %1, %2"
	  : "=r"(carry)
	  : "r"(a.digit0), "r"(b.digit0));
  __asm__("add %0, %1, %2"
	  : "=r"(pre)
	  : "r"(digit1f),"r"(digit1l));
  __asm__("add %0, %1, %2"
	  : "=r"(digit1)
	  : "r"(pre), "r"(carry));
  
  return (myuint128_t){digit0, digit1};
}

/* m, n, mn */
const myuint128_t tests[][3] = {
  {{0x4A068ABE4E7F6E44UL, 0xB58D9CBDE29F1EC7UL}, {0x8B258FD5A605196AUL, 0x8817AE5BFE8B08DCUL}, {0xC152ED0831DC4C28UL, 0xCFB5E2079CBC0EC1UL}}
};

int main() {
  /* tests の各テストを実行し、結果を表示する。失敗したらexit */
  int i;
  for(i = 0; i < (int)(sizeof(tests) / sizeof(*tests)); ++i) {
    myuint128_t r = mul128(tests[i][0], tests[i][1]);
    printf("mul128(0x%016lx%016lx, 0x%016lx%016lx) = 0x%016lx%016lx\n",
        tests[i][0].digit1, tests[i][0].digit0,
        tests[i][1].digit1, tests[i][1].digit0,
        r.digit1, r.digit0);
    if(!eq128(r, tests[i][2])) {
      printf("0x%016lx%016lx != 0x%016lx%016lx\n",
          r.digit1, r.digit0,
          tests[i][2].digit1, tests[i][2].digit0);
      exit(1);
    }
  }
  return 0;
}
