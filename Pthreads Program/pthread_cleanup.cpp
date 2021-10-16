#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <pthread.h>
#include <fcntl.h>
#include <unistd.h>
void cleanup(void *arg)
{
	printf("cleanup: %s\n",(char *)arg);
}
 
void *thr_fn(void *arg)
{
	printf("thread 1 start\n");
	pthread_cleanup_push(cleanup,(void*)"thread 1 first handlter");
	pthread_cleanup_push(cleanup,(void*)"thread 2 second handlter");
	printf("thread 1 push complete\n");
 
	if(arg)
		return ((void *)1);
	pthread_cleanup_pop(1);
	pthread_cleanup_pop(0);
	
	return ((void *)1);
 
}
 
int main()
{
	int err;
	pthread_t tid1;
	void *tret;
	err = pthread_create(&tid1,NULL,thr_fn,NULL);
	if(err != 0)
		printf("creat error:%s\n",strerror(err));
	err = pthread_join(tid1,&tret);
	if(err != 0)
		printf("get end error:%s\n",strerror(err));
	printf("the thread code %ld\n",(long*)tret);
	return 0;
}

