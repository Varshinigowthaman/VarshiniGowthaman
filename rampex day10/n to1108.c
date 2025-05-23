#include <stdio.h>
void print_n_to_1(int n)
{
  if (n >= 1) {
    printf("%d ", n);
    print_n_to_1(n - 1);
  }
}
int main() {
  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  printf("Numbers from %d to 1: ", num);
  print_n_to_1(num);
  printf("\n");
  return 0;
}