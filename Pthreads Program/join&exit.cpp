#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
pthread_t  tid1, tid2;
void  *tret;

void *thr_fn1(void *arg){
   	_sleep(1*1000);//睡眠一秒，等待TID2結束。
    pthread_join(tid2, &tret);//tid1一直阻賽，等到tid2的退出，獲得TID2的退出碼
    printf("thread 2 exit code %d\n", (int*)tret);
    printf("thread 1 returning\n");
    return((void *)2);
}

void *thr_fn2(void *arg){     
    printf("thread 2 exiting\n");
     pthread_exit((void *)3);
}

int main(void)
{
    int err;
    err = pthread_create(&tid1, NULL, thr_fn1, NULL);
    if (err != 0)
        printf("can’t create thread 1\n");
    err = pthread_create(&tid2, NULL, thr_fn2, NULL);
    if (err != 0)
        printf("can’t create thread 2\n");
    err = pthread_join(tid1, &tret);//祝執行緒一直阻賽，等待TID1的返回。
    if (err != 0)
        printf("can’t join with thread 1\n");
    printf("thread 1 exit code %d\n", (int*)tret);

    exit(0);
}
