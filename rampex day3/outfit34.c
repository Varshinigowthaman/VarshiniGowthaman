#include <stdio.h>
void suggestOutfit(int temperature) {
    if (temperature < 10) {
        printf("Suggested outfit: Jacket\n");
    } else if (temperature >= 10 && temperature <= 20) {
        printf("Suggested outfit: Sweater\n");
    } else if (temperature > 20) {
        printf("Suggested outfit: T-shirt\n");
    } else {
        printf("Invalid temperature input.\n");
    }
}
int main() {
    int temp;
    printf("Enter the current temperature (°C): ");
    scanf("%d", &temp);
    suggestOutfit(temp);
    return 0;
}
