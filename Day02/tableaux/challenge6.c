#include <stdio.h>

int main() {
    int n, i, fac;
        int tableau[n];

    printf("entre le nombre d'éléments: ");
    scanf("%d", &n);


    printf("entre les %d éléments:\n", n);
    for (i = 0; i < n; i++) {
        printf("elément %d: ", i);
        scanf("%d", &tableau[i]);
    }

    printf(" facteur de multiplication: ");
    scanf("%d", &fac);

    for (i = 0; i < n; i++) {
        tableau[i] *= fac;
    }

    printf("résultat tableau %d:\n", fac);
    for (i = 0; i < n; i++) {
        
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
