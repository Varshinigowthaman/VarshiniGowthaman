#include <stdio.h>
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int reversed = reverseNumber(number);
    printf("The reverse of %d is %d\n", number, reversed);
    return 0;
}
