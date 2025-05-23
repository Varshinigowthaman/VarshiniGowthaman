#include <stdio.h>
int gcd_iterative(int a, int b)
 {
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int gcd_recursive(int a, int b)
 {
    if (b == 0)
    {
        return a;
    } else {
        return gcd_recursive(b, a % b);
    }
}
int main()
 {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int gcd_iter = gcd_iterative(num1, num2);
    printf("GCD (Iterative): %d\n", gcd_iter);
    int gcd_recur = gcd_recursive(num1, num2);
    printf("GCD (Recursive): %d\n", gcd_recur);
    return 0;
}