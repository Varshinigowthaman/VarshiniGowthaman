#include <stdio.h>
int reverse(int num) {
    int reversed = 0, digit;
    while (num != 0) {
        digit = num % 10;           
        reversed = reversed * 10 + digit;  
        num /= 10;                  
    }
    return reversed;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed = reverse(num); 
    printf("Reversed number = %d\n", reversed);
    return 0;
}
