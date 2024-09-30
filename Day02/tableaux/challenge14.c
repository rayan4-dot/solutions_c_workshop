#include <stdio.h>

int main() {
    float somme = 0, moyenne;
    int n, i;
    int tableau[n];

    printf("le nombre d'éléments: ");
    scanf("%d", &n);

    printf("sasir les %d éléments:\n", n);
    for (i = 0; i < n; i++) {
        printf("élément %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    for (i = 0; i < n; i++) {
        somme += tableau[i];
    }
    moyenne = somme / n;

    printf("moyenne des éléments: %.2f\n", moyenne);

    return 0;
}
