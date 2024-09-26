#include <stdio.h>

int main() {
    float a, b, c;
    float moyen;

    printf("Entrez le premier nombre: ");
    scanf("%f", &a);
    printf("Entrez le deuxième nombre: ");
    scanf("%f", &b);
    printf("Entrez le troisième nombre: ");
    scanf("%f", &c);


    moyen = (a * 2 + b * 3 + c * 5) / (10);


    printf("La moyenne pondérée des trois nombres est: %.2f\n", moyen);

    return 0;
}
