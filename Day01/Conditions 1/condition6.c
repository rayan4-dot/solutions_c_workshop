#include <stdio.h>

int main() {
    int num;

    // input
    printf("type a number : ");
    scanf("%d", &num);

//positif ou négative ou nul


    if (num > 0) {
        printf("number's positive.\n");
    } 
    else if (num < 0) {
        printf("number's negative.\n");
    } 
    else {
        printf("number's even.\n");
    }

    return 0; 
}
