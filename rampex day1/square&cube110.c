#include <stdio.h>
int main() {
    float number;  
    printf("Enter a number: ");
    scanf("%f", &number);  
    float square = number * number;
    float cube = number * number * number;
    printf("The square of %.2f is %.2f\n", number, square);
    printf("The cube of %.2f is %.2f\n", number, cube);
    return 0;
}
