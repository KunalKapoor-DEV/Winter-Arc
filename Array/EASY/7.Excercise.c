#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int arr[5] = {10, 20, 30, 40, 50};

    int i = 4;

    while(i >= 0)
    {
        printf("%d\n", arr[i]);
        --i;
    }
}
