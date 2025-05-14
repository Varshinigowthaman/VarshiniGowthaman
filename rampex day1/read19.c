#include <stdio.h>
int main() {
    char name[100];  
    int age;         
    float salary;   
    printf("Enter the employee's name: ");
    fgets(name, sizeof(name), stdin);  
    printf("Enter the employee's age: ");
    scanf("%d", &age); 
    printf("Enter the employee's salary: ");
    scanf("%f", &salary);
    printf("\nEmployee Details:\n");
    printf("Name: %s", name);  
    printf("Age: %d\n", age); 
    printf("Salary: %.2f\n", salary); 
    return 0;
}
