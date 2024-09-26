#include <stdio.h>

int main() {
    float a ,b ;
    printf("type number a: ");
    scanf("%f", &a);

    printf("type number b: ");
    scanf("%f", &b);

    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);
    printf("a / b = %.2f\n", a / b);
}