#include <stdio.h>
int main() {
  int a, b, c;
  printf("Enter the first number (a): ");
  scanf("%d", &a);
  printf("Enter the second number (b): ");
  scanf("%d", &b);
  printf("\nBefore swapping:\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  c = a;
  a = b;
  b = c;
  printf("\nAfter swapping:\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  return 0;
}