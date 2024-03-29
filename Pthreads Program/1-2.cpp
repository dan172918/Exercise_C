#include <stdlib.h>	
#include <stdio.h>	
#include <unistd.h>	
#include <sys/types.h>	
#include <sys/ipc.h>	
#include <sys/shm.h>	
#include <sys/wait.h>	
void do_one_thing(int *);	
void do_another_thing(int *);	
void do_wrap_up(int, int);	
int   shared_mem_id;	
int   *shared_mem_ptr;	
int   *r1p;	
int   *r2p;	
extern int	
main(void)	
{	
	pid_t  child1_pid, child2_pid;	
	int  status;	
	/* initialize shared memory segment */	
	shared_mem_id = shmget(IPC_PRIVATE, 2*sizeof(int), 0660);	
	shared_mem_ptr = (int *)shmat(shared_mem_id, (void *)0, 0);	
	r1p = shared_mem_ptr;	
	r2p = (shared_mem_ptr + 1);	
	*r1p = 0;	
	*r2p = 0;	
	if ((child1_pid = fork()) == 0) {	
	/* first child */	
	do_one_thing(r1p);	
	exit(0);	
	}	
	/* parent */	
	if ((child2_pid = fork()) == 0) {	
	/* second child */	
	do_another_thing(r2p);	
	exit(0);	
	}	
	/* parent */	
	waitpid(child1_pid, &status, 0);	
	waitpid(child2_pid, &status, 0);	
	do_wrap_up(*r1p, *r2p);	
	return 0;	
}
