#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* x = malloc(sizeof(int));
    *x = 61;

    printf("%d", *x);
}
