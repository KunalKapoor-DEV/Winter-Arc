#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int A[5] = {1, 2, 3, 4, 5};
    int i = 0;

    int B[5] = {};

    while (i < 5)
    {
        B[i] = A[i];
        ++i;
    }
    
    i = 0;

    while (i < 5)
    {
        printf("arrB[%d]:%d\n", i, B[i]);
        ++i;
    }
    

}