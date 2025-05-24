#include <stdio.h>
void print_n_to_1(int n) 
{
  if (n >= 1) 
  {
    printf("%d ", n);
    print_n_to_1(n - 1);
  }
}
int main() 
{
  int num=15;
  printf("\n Numbers from %d to 1: ", num);
  print_n_to_1(num);
  return 0;
}