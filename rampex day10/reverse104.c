#include<stdio.h>
int reversenumber(int num, int rev)
{
    if(num==0)
    return rev;
    return reversenumber(num/10, rev*10+num%10);
}
int main()
{
    int number, reversed;
    printf("Enter a number: ");
    scanf("%d", &number);
    reversed = reversenumber(number, 0);
    printf("Reversed number: %d\n", reversed);
    return 0;
}