#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int arr[5] = {4, 7, 2, 9, 5};
    int sum = 0;
    int i = 0;

    while (i < 5)
    {
        sum = sum + arr[i];
        ++i;
    }
    printf("%d", sum);
}