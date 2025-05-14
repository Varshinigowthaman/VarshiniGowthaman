#include <stdio.h>
#include <ctype.h> // For the isalpha() function

void checkVowelsConsonants(char word[]) {
    int i = 0;
    while(word[i] != '\0') {
        char ch = tolower(word[i]); 
        if (isalpha(ch)) {  
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                printf("%c is a vowel.\n", word[i]);
            } else {
                printf("%c is a consonant.\n", word[i]);
            }
        } else {
            printf("%c is not an alphabet.\n", word[i]);
        }
        i++;
    }
}

int main() {
    char word[100];
    
    printf("Enter a word: ");
    scanf("%s", word);
    
    checkVowelsConsonants(word);
    
    return 0;
}
