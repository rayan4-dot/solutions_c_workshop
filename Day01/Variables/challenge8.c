#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, moyen;

    // Type three numbers
    printf("type first number : ");
    scanf("%lf", &a);
    printf("type second number : ");
    scanf("%lf", &b);
    printf("type third number : ");
    scanf("%lf", &c);

    moyen = cbrt(a * b * c);


    printf("Average geometry is : %.2lf\n", moyen);

    return 0;
}