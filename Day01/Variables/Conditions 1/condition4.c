#include <stdio.h>
#include <math.h>  // for sqrt function

int main() {

    double a, b, c;
    double discriminant, x, y;

    // user input
    
    printf("Entrez la valeur de a : ");
    scanf("%lf", &a);
    printf("Entrez la valeur de b : ");
    scanf("%lf", &b);
    printf("Entrez la valeur de c : ");
    scanf("%lf", &c);

    // if a=0, the equation is not second degree

    if (a == 0) {
        printf("This isn't a second degree equation.\n");
    } else {
        // discriminant : b² - 4ac
        discriminant = b * b - 4 * a * c;

        //  if b2 – 4ac > 0 then the quadratic function has two distinct real roots
        if (discriminant > 0) {
            x = (-b + sqrt(discriminant)) / (2 * a);
            y = (-b - sqrt(discriminant)) / (2 * a);
            printf("There are two solutions : x1 = %.2lf et x2 = %.2lf\n", x, y);
        }
        // if the discrimination is now at 0, it is a simple solution.
        else if (discriminant == 0) {
            x = -b / (2 * a); // Les deux racines sont identiques
            printf("There's one solution : x = %.2lf\n", x);
        }
        // if the discrimination is negative, there is no real solution
        else {
            printf("There is no real solution, just complex solutions.\n");
        }
    }

    return 0; 
}
