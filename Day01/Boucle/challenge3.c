#include <stdio.h>

int main() {
    int n, sum = 0;

 
    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("La somme des %d nombres naturels est : %d\n", n, sum);

    return 0;
}
