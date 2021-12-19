#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


int main (int argc, const char *argv){

	pthread_t thread_id;
	pthread_create(&thread_id, NULL, myThreadfun, NULL);
	pthread_join(thread_id, NULL);

	return 0;
}
