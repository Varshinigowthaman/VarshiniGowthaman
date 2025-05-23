#include <stdio.h>
int sumDivisors(int n, int i)
 {
    if (i == 0)
        return 0;
    if (n % i == 0)
        return i + sumDivisors(n, i - 1);
    return sumDivisors(n, i - 1);
}
int isPerfect(int n)
 {
    return sumDivisors(n, n / 2) == n;
}
int main()
{
    int n;
    scanf("%d", &n);
    if (isPerfect(n))
        printf("true\n");
    else
        printf("false\n");
    return 0;
}