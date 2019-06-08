#include <stdio.h>
#include <unistd.h>

pid_t mygetpid(void);

int main() {
  printf("%d\n", mygetpid());
  return 0;
}
