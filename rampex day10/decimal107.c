#include <stdio.h>

int main() {
    int decimal, quotient, remainder;
    int binary[32];  // Array to store binary digits (supports up to 32-bit numbers)
    int i;

    // Prompt the user for input
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    quotient = decimal;
    i = 0;

    // Convert decimal to binary using a for loop
    for (; quotient > 0; i++) {
        remainder = quotient % 2;
        binary[i] = remainder;
        quotient = quotient / 2;
    }

    // Print the binary number in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
