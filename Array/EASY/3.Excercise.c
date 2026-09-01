#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int arr[5] = {45, 12, 78, 34, 56};
    int t = 0;
    int i = 0;

    while (i < 5)
    {
        if (t < arr[i])
        {
            t = arr[i];
        }
        ++i;
    }

    printf("%d", t);
}