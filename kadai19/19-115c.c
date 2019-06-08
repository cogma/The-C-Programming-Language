#include <stdio.h>
#include <pthread.h>
 
void decrement(int *ptr);
 
static int counter;
 
static void *my_entrypoint(void *data) {
    for(int i = 0; i < 100000000; ++i) {
        decrement(&counter);
    }
    return NULL;
}
 
int main() {
    pthread_t thread1, thread2;
    counter = 200000000;
    // thread1 を作る。
    pthread_create(&thread1, NULL, my_entrypoint, NULL);
    // 並行で thread2 を作る。
    pthread_create(&thread2, NULL, my_entrypoint, NULL);
    // thread1 の計算が終わるのを待つ
    pthread_join(thread1, NULL);
    // thread2 の計算が終わるのを待つ
    pthread_join(thread2, NULL);
    // 無事、共有している変数 counter を安全に操作できていたならば、 counter は 0。
    printf("counter = %d\n", counter);
    return 0;
}
