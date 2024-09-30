#include <stdio.h>

int main() {
    int n, i, r_valeur, n_valeur;
    int tableau[n];

//user input
    printf("sasir le nombre d'éléments du tableau: ");
    scanf("%d", &n);

        printf("saisir les %d éléments:\n", n);
    for (i = 0; i < n; i++) {
        printf("elément %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

// r_valeur
    printf("ancien valeur: ");
    scanf("%d", &r_valeur);

//n_valeur

    printf("la nouvelle valeur: ");
    scanf("%d", &n_valeur);

    for (i = 0; i < n; i++) {
        if (tableau[i] == r_valeur) {
            tableau[i] = n_valeur;
        }
    }
    printf("c'est modifié:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
