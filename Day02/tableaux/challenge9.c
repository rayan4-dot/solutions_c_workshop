#include <stdio.h>

int main() {
    int n, i, rev;
        int tableau[n];

    printf("entre le nombre d'éléments: ");
    scanf("%d", &n);

    printf("entre les %d éléments:\n", n);
    for (i = 0; i < n; i++) {

        printf("elément %d: ", i);
        scanf("%d", &tableau[i]);
    }
