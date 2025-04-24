#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "stress.h"

// Function to run heavy CPU-bound calculations in an infinite loop
void *cpu_stress(void *arg){
    volatile unsigned long long i;
    while (1) {
        // Perform a large number of pointless calculations to fully stress the CPU
        for (unsigned long long j = 0; j < 10000000; ++j){
            i += j;
        }
    }
    return NULL;
}

//void kill_cpu
/*
    This function gets called from stress.c, that will start the CPU stress.
    Determine the number of CPU cores (this can be dynamically detected or set statically)
*/
void kill_cpu(){
    printf("Starting CPU destruction! UwU....\n");
    
    int num_cores = 4;  // Default to 4 cores; adjust as necessary or dynamically detect
    pthread_t *threads = malloc(num_cores *sizeof(pthread_t));

    if(threads == NULL){
        printf("Memory allocation failed.\n");
        return;
    }
    // Create threads to stress each core
    for(int i = 0; i < num_cores; i++) {
        if(pthread_create(&threads[i], NULL, cpu_stress, NULL)){
            printf("Error creating thread %d\n", i);
            free(threads);
            return;
        }
    }
    // Wait for the threads to finish (they never will since they run infinitely)
    for(int i = 0; i < num_cores; i++){
        pthread_join(threads[i], NULL);

    }
    // Free allocated memory
    free(threads);
}