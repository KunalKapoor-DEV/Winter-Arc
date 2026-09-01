#include <stdio.h>
#include <stdlib.h>

const char* Check_Element(int arr[], int input)
{
    for (int i = 0; i < 5; ++i)
    {
        if (input == arr[i])
        {
            return "FOUND";
        }
    }
    return "Not Found";
}

int main(void)
{
    int arr[5] = {5, 12, 8, 3, 17};
    int input;
    printf("Target: ");
    scanf("%d", &input);
    
    printf("\n%s", Check_Element(arr, input));
}