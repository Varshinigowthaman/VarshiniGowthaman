#include<stdio.h>
int div(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0; 
    }
    return a / b;
}
int main()
{
    printf("\n Division of first two numbers: %d", div(87, 3));
    printf("\n Division of second two numbers: %d", div(90, 0)); 
    return 0;
}
