#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <errno.h>

void *func1(void* a)/*1秒?之后退出*/
{
    _sleep(1*100);
    printf("pthread 1（ID：%x）退出。\n",(unsigned int)pthread_self());
    pthread_exit((void *)0);
}

void *func2(void* a)/*5秒?之后退出*/
{
    _sleep(5*100);
    printf("pthread 2（ID：%x）退出。\n",(unsigned int)pthread_self());
    pthread_exit((void *)0);
}

void test_pthread(pthread_t tid) /*pthread_kill的返回值：成功（0） ?程不存在（ESRCH） 信?不合法（EINVAL）*/
{
    int pthread_kill_err;
    pthread_kill_err = pthread_kill(tid,0);

    if(pthread_kill_err == ESRCH)
        printf("ID : %x的pthread不存在或者已退出。\n",(unsigned int)tid);
    else if(pthread_kill_err == EINVAL)
        printf("ERROR。\n");
    else
        printf("ID : %x的pthread目前仍然存活。\n",(unsigned int)tid);
}

int main()
{
    int ret;
    pthread_t tid1,tid2;
    
    pthread_create(&tid1,NULL,func1,NULL);
    pthread_create(&tid2,NULL,func2,NULL);
    
    _sleep(3*100);
    
    test_pthread(tid1);
    test_pthread(tid2);

    exit(0);
}

