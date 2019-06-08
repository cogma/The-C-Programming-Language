#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>

/*適当なグローバル変数*/
int global1;
int global2 = 0;
const int global3 = 0;

int main()
{
  /*適当なローカル変数*/
  int local;

  /*malloc(8) の結果*/
  void *mal8=malloc(8);

  /*malloc(1048576) の結果*/
  void *mal1048576=malloc(1048576);

  /*適当な mmap() 呼び出しの結果*/
  void *ptr = mmap(NULL, 65536, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);

  /*適当な関数ポインタ*/
  int func(){
	printf("Hello, world!¥n");
	return 0;
  }

  /*etext, edata, end の値*/
  extern char etext;
  extern char edata;
  extern char end;

  printf("&local = %p\n",&local);
  printf("&global1 = %p\n",&global1);
  printf("&global2 = %p\n",&global2);
  printf("&global3 = %p\n",&global3);
  printf("malloc(8)の結果 : %p\n",mal8);
  printf("malloc(1048576)の結果 : %p\n",mal1048576);
  printf("mmap(NULL,65536,PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0)の結果 : %p\n",ptr);
  printf("func : %p\n",func);
  printf("etext = %p\n",&etext);
  printf("edata = %p\n",&edata);
  printf("end = %p\n",&end);

  /*sbrk(0) の値*/
  printf("sbrk(0) = %p\n",sbrk(0));
  free(mal8);
  free(mal1048576);
  return 0;
}
