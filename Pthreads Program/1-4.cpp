#include <stdio.h>	
#include <pthread.h>	
void *do_one_thing(void *pnum_times)	
{	
	int i, j, x;
	int *pnum_times1 = (int *)pnum_times;
	for (i = 0;  i < 4; i++) {	
		printf("doing one thing\n");
		printf("In function \nthread id = %d\n", pthread_self()); 	
		for (j = 0; j < 10000; j++) x = x + i;	
		(*pnum_times1)++;	
	}	
}	
void *do_another_thing(void *pnum_times)	
{	
	int i, j, x;
	int *pnum_times1 = (int *)pnum_times;	
	for (i = 0;  i < 4; i++) {	
		printf("doing another \n");	
		printf("In function \nthread id = %d\n", pthread_self()); 
		for (j = 0; j < 10000; j++) x = x + i;	
		(*pnum_times1)++;	
	}	
}	
void do_wrap_up(int one_times, int another_times)	
{	
	int total;	
	total = one_times + another_times;	
	printf("wrap up: one thing %d, another %d, total %d\n",	
	one_times, another_times, total);	
}
int r1 = 0, r2 = 0;	

extern int main(void)	
{	
	pthread_t thread1, thread2;	
	pthread_create(&thread1,NULL,do_one_thing,&r1);	
	pthread_create(&thread2,NULL,do_another_thing,&r2);	
	pthread_join(thread1, NULL);	
	pthread_join(thread2, NULL);	
	do_wrap_up(r1, r2);	
	return 0;	
}
