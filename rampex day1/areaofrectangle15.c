#include <stdio.h> 
int main() {
    double length, width, area, perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%lf", &length); 
    printf("Enter the width of the rectangle: ");
    scanf("%lf", &width);
    if (length < 0 || width < 0) {
        printf("Invalid input: Length and width cannot be negative.\n");
        return 1; 
    }
    area = length * width;
    perimeter = 2 * (length + width);
    printf("The area of the rectangle is: %.2lf\n", area); 
    printf("The perimeter of the rectangle is: %.2lf\n", perimeter);
    return 0;
}