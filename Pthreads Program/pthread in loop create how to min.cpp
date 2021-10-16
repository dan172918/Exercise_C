#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include<ctime>
using namespace std;


void *test(void* i){
	
	printf("%d %d\n", (int*)i,pthread_self());
	pthread_exit((void *)i);
}
int main(void)
{	
	void  *tret;
	srand(time(0));
	int i,j,min=10;
	pthread_t thread[10];
	for(i=0;i<10;i++){
		j=rand()%10; 
		pthread_create(&thread[i],NULL,test,(void*)j);
		pthread_join(thread[i],&tret);
		if(min>*((int*)&tret))
			min=*((int*)&tret);
		_sleep(1);
	}
	printf("\n%d",min);
}
