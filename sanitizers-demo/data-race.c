#include <pthread.h>
#include <stdio.h>

const int kIncrements = 100500;

int counter = 0;

void* Routine(void* arg)
{
    (void)arg;

    for (int i = 0; i < kIncrements; ++i) {
        ++counter;
    }

    return NULL;
}

int main()
{
    pthread_t thread1;
    pthread_create(&thread1, /*attr=*/NULL, &Routine, /*arg=*/NULL);

    pthread_t thread2;
    pthread_create(&thread2, /*attr=*/NULL, &Routine, /*arg=*/NULL);

    pthread_join(thread1, /*thread_return=*/NULL);
    pthread_join(thread2, /*thread_return=*/NULL);

    printf("Expected: %d, got: %d", kIncrements * 2, counter);
}
