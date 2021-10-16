#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <errno.h>

void *func1(void* a)/*1��?���Z�h�X*/
{
    _sleep(1*100);
    printf("pthread 1�]ID�G%x�^�h�X�C\n",(unsigned int)pthread_self());
    pthread_exit((void *)0);
}

void *func2(void* a)/*5��?���Z�h�X*/
{
    _sleep(5*100);
    printf("pthread 2�]ID�G%x�^�h�X�C\n",(unsigned int)pthread_self());
    pthread_exit((void *)0);
}

void test_pthread(pthread_t tid) /*pthread_kill����^�ȡG���\�]0�^ ?�{���s�b�]ESRCH�^ �H?���X�k�]EINVAL�^*/
{
    int pthread_kill_err;
    pthread_kill_err = pthread_kill(tid,0);

    if(pthread_kill_err == ESRCH)
        printf("ID : %x��pthread���s�b�Ϊ̤w�h�X�C\n",(unsigned int)tid);
    else if(pthread_kill_err == EINVAL)
        printf("ERROR�C\n");
    else
        printf("ID : %x��pthread�ثe���M�s���C\n",(unsigned int)tid);
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

