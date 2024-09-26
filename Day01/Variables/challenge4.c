#include <stdio.h>

int main() {
    float kmh, ms;
//input
    printf("Entre la vitesse en(km/h): ");
    scanf("%f", &kmh);

// convert 
    ms = kmh * 0.27778;

    printf("La vitesse en (m/s) est: %.2f m/s\n", ms);

    return 0;
}
