#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[7] = {3, 8, 12, 5, 7, 10, 2};
    int even = 0;
    int i = 0;

    while (i < 7)
    {
        if (arr[i] % 2 == 0)
        {
            ++even;
        }
        ++i;
    }

    printf("%d", even);
}