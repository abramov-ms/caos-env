#include <pthread.h>
#include <stdio.h>

void* Routine(void* arg)
{
    (void)arg;

    printf("Hello, World!");

    return NULL;
}

int main()
{
    pthread_t thread;
    pthread_create(&thread, /*attr=*/NULL, &Routine, /*arg=*/NULL);

    return 0;
}
