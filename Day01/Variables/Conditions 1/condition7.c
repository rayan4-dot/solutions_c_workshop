#include <stdio.h>

int main() {
    char alphabet;

    // input
    printf("type the letter: ");
    scanf(" %c", &alphabet);  

    // check if character is uppercase or not
    if (alphabet <= 'Z' && alphabet >= 'A') {
        printf("'%c' is an uppercase alphabet.\n", alphabet);
    } 
    else {
        printf("'%c' is not an uppercase alphabet.\n", alphabet);
    }

    return 0;
}
