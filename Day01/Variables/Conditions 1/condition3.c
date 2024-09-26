#include <stdio.h>

int main() {
    int a, b, sum;

    // user input
    printf("type first number: ");
    scanf("%d", &a);
    
    printf("type second number: ");
    scanf("%d", &b);

// calculate
    if (a == b) {
        sum = 3 * (a + b); 
    } else {
        sum = a + b; 
    }


    printf("the sum of the numbers is : %d\n", sum);

    return 0;
}
