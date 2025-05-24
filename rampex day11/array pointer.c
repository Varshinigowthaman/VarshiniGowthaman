#include <stdio.h>
int main() 
{
    int arr[] = {12, 24, 36, 48, 55};
    int *ptr = arr;   
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}