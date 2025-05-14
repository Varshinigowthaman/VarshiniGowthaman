#include <stdio.h>
int main() {
    float basicSalary, HRA, DA, grossSalary;
    printf("Enter the Basic Salary: ");
    scanf("%f", &basicSalary);
    HRA = 0.20 * basicSalary;  
    DA = 0.10 * basicSalary;  
    grossSalary = basicSalary + HRA + DA;
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("HRA (20%% of Basic Salary): %.2f\n", HRA);
    printf("DA (10%% of Basic Salary): %.2f\n", DA);
    printf("Gross Salary: %.2f\n", grossSalary);
    return 0;
}
