#include <stdio.h>
#include <ctype.h>  
void checkCase(char ch) {
    if (isupper(ch)) {
        printf("The character '%c' is uppercase.\n", ch);
    } else if (islower(ch)) {
        printf("The character '%c' is lowercase.\n", ch);
    } else {
        printf("The character '%c' is neither uppercase nor lowercase.\n", ch);
    }
}
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    checkCase(ch);
    return 0;
}
