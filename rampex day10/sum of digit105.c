#include<stdio.h>
int sum_digits(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    { 
        return (n%10+sum_digits(n/10));
     }
}
int main()
{
    int num;
    printf("ENTER A NUMBER:");
    scanf("%d",&num);
    printf("THE SUM OF THE DIGITS IS %d",sum_digits(num));
    return 0;
}