#include <stdio.h>
int findGreatest(int a, int b, int c) {
    int max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    return max;
}
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int greatest = findGreatest(num1, num2, num3);
    printf("The greatest number is: %d\n", greatest);
    return 0;
}
