#include <stdio.h>
int main() 
{
    int a = 14, b = 12;
    int *ptr1 = &a; 
    int *ptr2 = &b;  
    int sum;
    sum = *ptr1 + *ptr2;  
    printf("Sum of %d and %d is %d\n", *ptr1, *ptr2, sum);
    return 0;
}