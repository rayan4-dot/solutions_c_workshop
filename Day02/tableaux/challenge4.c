#include <stdio.h>

int main() {
    int n, i, max;
    int tableau[n];

    printf("Entrez le nombre d'éléments du tableau: ");
    scanf("%d", &n);

    printf("entrez les %d éléments:\n", n);
    for (i = 0; i < n; i++) {
        
        printf("elément %d:", i);
        scanf("%d", &tableau[i]);
    }
    max = tableau[0];

    for (i = 1; i < n; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    printf("le plus grand élément dans un tableau d'entiers: %d\n", max);

    return 0;
}
