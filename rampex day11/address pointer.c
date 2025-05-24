#include <stdio.h>
int main() 
{
    int num = 20;       
    int *ptr;            
    ptr = &num;          
    printf("Address of num using pointer: %p\n", ptr);
    printf("Address of num using &num: %p\n", &num);
    return 0;
}