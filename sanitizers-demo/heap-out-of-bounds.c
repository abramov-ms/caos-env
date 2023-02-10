#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int kArraySize = 100;
    int* array = calloc(kArraySize, sizeof(int));

    printf("%d\n", array[kArraySize]);

    free(array);
    return 0;
}
