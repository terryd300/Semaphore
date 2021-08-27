// Terry Delaney

#include "HW8.h"

int main() {

    // Clear the screen
    system("clear");

    // Create 10 pthreads that increment a global integer 10 times - Each pthread needs to print a statement with it's ID and the global variable's value

    // Create global variables

    counter = (int) malloc (sizeof(int));
    threadwait = (int) malloc (sizeof(int));
    counter = 0;

    // Initialize Semaphore

    semaphore = sem_init(&mutex, 0, 1);

    // Create 10 pthreads

    for (int i = 0; i < 10; i++)
    {
        pthread_create(&threadid[i], NULL, threadroutine, NULL);
    }

    for (int k = 0; k < 10; k++)
    {
       pthread_join(threadid[k], NULL);
    }

    printf("\nThe final value of the global integer is: %d\n\n", counter);

    return 0;
}

void * threadroutine()
{
    sem_wait(&mutex);

        for (int j = 0; j < 10; j++)
        {
            printf("Thread ID: %x Global Integer Value: %d\n", (int)pthread_self(), counter++);
        }

    sem_post(&mutex);

    pthread_exit(NULL);
}

