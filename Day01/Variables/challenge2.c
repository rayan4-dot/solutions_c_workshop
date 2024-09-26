#include <stdio.h>

int main() {
    float celsius, kelvin;

    // Input temperature Celsius
    printf("Type the temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Kelvin
    kelvin = celsius + 273.15;

    printf("The temperature in Kelvin is: %.2f K\n", kelvin);

    return 0;
}
