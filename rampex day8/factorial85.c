#include<stdio.h>
int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int num1 = 5, num2 = 7;
    printf("\n Factorial of %d is: %d", num1, factorial(num1));
    printf("\n Factorial of %d is: %d", num2, factorial(num2));
    return 0;
}