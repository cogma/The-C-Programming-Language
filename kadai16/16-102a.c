extern int foo(int x);
extern int (*bar)(int x);
 
int f(int x) {
  return bar(foo(x));
}
