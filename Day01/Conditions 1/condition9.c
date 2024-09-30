#include <stdio.h>

int main() {
    char alphabet;

    // input user
    printf("input character: ");
    scanf(" %c", &alphabet); 

    if ((alphabet <= 'z' && alphabet >= 'a') || (alphabet >= 'A' && alphabet <= 'Z') ) {
        
        if (alphabet >= 'A' && alphabet <= 'Z') {
            printf("'%c' is an uppercase alphabet\n", alphabet);
        } else {
            printf("'%c' is a lowercase alphabet.\n", alphabet);
        }
    } 

    else {
        printf("The character'%c' is no alphabet.\n", alphabet);
    }

    return 0; 
}
