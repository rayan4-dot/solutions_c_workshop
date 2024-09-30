#include <stdio.h>

int main() {
    int n, i, somme = 0;
    int tableau[n];

    printf("entre le nombre d'éléments: ");
    scanf("%d", &n);

    printf("saisir les %d éléments:\n", n);
    for (i = 0; i < n; i++) {
        printf("elément %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    for (i = 0; i < n; i++) {
        somme += tableau[i];
    }

    printf("La somme des éléments: %d\n", somme);

    return 0;
}
