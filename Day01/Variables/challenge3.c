#include <stdio.h>

int main() {
    float kilometers, yards;

    // Input user kilometer distance
    printf("Type distance in kilometer: ");
    scanf("%f", &kilometers);

    // Convert kilometer to yards
    yards = kilometers * 1093.61;


    printf("distance in yards is : %.2f\n", yards);

    return 0;
}
