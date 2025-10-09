#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); 

    if (isdigit(ch)) {
        printf("It is a number.\n");
    } 
    
    else if (isalpha(ch)) {
        switch (ch) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                printf("It is a vowel.\n");
                break;
            default:
                printf("It is a consonant.\n");
                break;
        }
    } 
    
    else {
        printf("It is neither a letter nor a number (special character).\n");
    }

    return 0;
}
