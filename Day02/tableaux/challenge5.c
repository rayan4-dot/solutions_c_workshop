#include <stdio.h>

int main() {
    int n, i, minimum;
    int tableau[n];

    printf("entre le nombre d'éléments ");
    scanf("%d", &n);

    printf("entre les %d éléments:\n", n);
    for (i = 0; i < n; i++) {

        printf("elément %d: ", i );
        scanf("%d", &tableau[i]);
    }

    minimum = tableau[0];

    for (i = 1; i < n; i++) {
        if (tableau[i] < minimum) {
            minimum = tableau[i];
        }
    }

    printf("le plus petit élément : %d\n", minimum);

    return 0;
}