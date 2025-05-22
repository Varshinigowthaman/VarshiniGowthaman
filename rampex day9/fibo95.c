#include<stdio.h>
void fibonacci(int n)
{   
    int a= 0, b = 1, c, count = 0;
    printf("%d, %d", a, b);
    count=2;
    while (count < n)
    {
    c = a + b;
    printf(" , %d", c);
    a = b;
    b= c;
    count++;
    }
}
int main()
{
    int num;
    printf("\n Enter the number of Fibonacci numbers to generate: ");
    scanf("\n %d", &num);
    if(num>0)
    {
    printf("\n Fibonacci Series:");
    fibonacci(num);
    }
    return 0;
}