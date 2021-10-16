#include <stdio.h>	
#include <pthread.h>	
#define TCOUNT 10	
#define WATCH_COUNT 12	
int count = 0;	
pthread_mutex_t count_mutex = PTHREAD_MUTEX_INITIALIZER;	
pthread_cond_t count_threshold_cv = PTHREAD_COND_INITIALIZER;	
int  thread_ids[3] = {0,1,2};
int isChange = 0;
void *watch_count(void *idp)	
{	
	printf("go watch_count\n");
	int *idp1 = (int *)idp;
	pthread_mutex_lock(&count_mutex);	
	while (count <= WATCH_COUNT) {	
		pthread_cond_wait(&count_threshold_cv,&count_mutex);	
		printf("watch_count(): Thread %d,Count is %d, isChange : %d\n",*idp1, count,isChange);	
		isChange++;
		printf("watch_count(): Thread %d,Count is %d, isChange : %d\n",*idp1, count,isChange);	
	}
	
	pthread_mutex_unlock(&count_mutex);	
	printf("out watch_count\n");
}	

void *inc_count(void *idp)	
{	
	printf("go inc_count\n");
	int *idp1 = (int *)idp;
	for (int i =0; i < TCOUNT; i++) {	
		pthread_mutex_lock(&count_mutex);	
		count++;	
		printf("inc_count(): Thread %d, old count %d, new count %d, i:%d, count == WATCH_COUNT : %d, isChange : %d\n", *idp1, count - 1, count, i ,count == WATCH_COUNT,isChange);	
		if (count == WATCH_COUNT)	
			pthread_cond_signal(&count_threshold_cv);	
		pthread_mutex_unlock(&count_mutex);	
	}
	printf("out inc_count\n");	
}
extern int main(void){	
	pthread_t threads[3];	
	pthread_create(&threads[0],NULL,inc_count, &thread_ids[0]);	
	pthread_create(&threads[1],NULL,inc_count, &thread_ids[1]);	
	pthread_create(&threads[2],NULL,watch_count, &thread_ids[2]);	
	for (int i = 0; i < 3; i++)	
	    pthread_join(threads[i], NULL);	
}
