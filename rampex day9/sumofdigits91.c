#include<stdio.h>
int count_divisor(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n%i==0)
        {
            sum = sum+i;
        }
    }
    return sum;
}
int main()
{
    int num;
    printf("Sum of value: %d\n", count_divisor(8));
    return 0;
}
