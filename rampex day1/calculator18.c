#include <stdio.h>
int main() {
    float num1, num2;
    char operator;
    printf("Enter an operator (+, -, *, %%): ");
    scanf("%c", &operator);  
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);  
    switch (operator) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '%':
           
            printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }

    return 0;
}
