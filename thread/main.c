#include <stdlib.h>
#include <stdio.h>
#include "thread.h"
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#define NUM_THREADS 5

unsigned int total;
 void *add100(void *threadid)
 {
    long tid;
    tid = (long)threadid;
    unsigned int localTotal;
    printf("Adding 100 #%ld!\n", tid);
    localTotal= total;
    localTotal +=100;
    sleep(tid%5);
    total = localTotal;
    pthread_exit(NULL);
 }

 int main (int argc, char *argv[])
 {
    pthread_t threads[NUM_THREADS];
    int rc;
    long t;
    total =0;
    printf("Initial total =%d\n", total);
    for(t=0; t<NUM_THREADS; t++){
       printf("Final total: %d\n", total);
       rc = pthread_create(&threads[t], NULL, add100, (void *)t);
       if (rc){
          printf("ERROR; return code from pthread_create() is %d\n", rc);
          exit(-1);
       }
    }
    for(t=0; t<NUM_THREADS; t++){
       pthread_join (threads[t], NULL);
       }

    /* Last thing that main() should do */
    pthread_exit(NULL);
 }
