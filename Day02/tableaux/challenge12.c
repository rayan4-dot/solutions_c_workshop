#include <stdio.h>

int main() {
    int n, i;
    int tableau[n];

    printf("le nombre d'éléments du tableau: ");
    scanf("%d", &n);

    printf("entre les %d éléments:\n", n);
    for (i = 0; i < n; i++) {

        printf("elément %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Les éléments pairs :\n");
    for (i = 0; i < n; i++) {
        if (tableau[i] % 2 == 0) {
            printf("%d ", tableau[i]);
        }
    }
    printf("\n");

    return 0;
}
