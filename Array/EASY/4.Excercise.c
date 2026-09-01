#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int arr[6] = {23, 7, 45, 12, 89, 3};
    int t = 0;
    int i = 0;

    while (i < 6)
    {
        if(i > arr[i])
        {
            t = arr[i];
        }
        ++i;
    }
    printf("%d", t);
}