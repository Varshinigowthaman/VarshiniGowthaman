#include<stdio.h>
void power (int a, int b)
{
  int c=1;
  for(int i=1;i<=b;i++)
  {
    c=c*a;
  }
  printf("\n THE RESULT OF THE VALUES ARE:%d",c);
}
int main()
{
    power(2,3);
    power(3,5);
    return 0;
}