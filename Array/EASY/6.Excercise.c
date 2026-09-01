#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int arr[7] = {4, 2, 7, 2, 9, 2, 5};
    int count = 0;
    int i = 0;
    int target = 2;

    while (i < 7)
    {
        if (target == arr[i])
        {
            ++count;
        }
        ++i;
    }
    printf("%d", count);
}