//
// Created by Terry Delaney on 3/27/21.
//

#ifndef HW_8_HW8_H
#define HW_8_HW8_H

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

int counter;
int threadwait;
pthread_t threadid[10];
sem_t mutex;
int semaphore;

void * threadroutine();

#endif //HW_8_HW8_H
