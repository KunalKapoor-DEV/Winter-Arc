#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum;
    int i = 0;

    while(i < n)
    {
        sum = sum + arr[i];
        ++i; 
    }
    float avg = sum / n;

    printf("%.2f", avg);
}