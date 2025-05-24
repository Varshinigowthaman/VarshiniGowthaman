#include <stdio.h>
void decimalToBinary(int n)
 {
    if (n == 0)
        return;
    decimalToBinary(n / 2);
    printf("%d", n % 2);
}
int main() 
{
    int number = 12;
    if (number == 0)
        printf("0");
    else
    decimalToBinary(number);
    return 0;
}