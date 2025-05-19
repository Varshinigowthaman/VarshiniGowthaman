#include<stdio.h>
int main()
{
    int n;
    float sum = 0.0, average;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the element of the array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
    average = sum / n;
    printf("The average of the elements is: %.2f\n", average);
    return 0;
}