#include <stdio.h>

int main() {
    char character;

    // Input character
    printf("Entrez un caractère: ");
    scanf(" %c", &character); 

    // Verify if the char is a vowel
    switch (character) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("The character '%c'  is a vowel.\n", character);
            break;
        default:
            printf("The character '%c' is not a vowel.\n", character);
    }

    return 0;
}
