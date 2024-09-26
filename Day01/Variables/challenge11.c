#include <stdio.h>

int main() {
    float languor, width, surface;


    printf("Type the languor of rectangle: ");
    scanf("%f", &languor);
    printf("Type the width of rectangle: ");
    scanf("%f", &width);


    surface = languor * width;

    
    printf("The surface of rectangle is: %.2f\n", surface);

    return 0;
}
