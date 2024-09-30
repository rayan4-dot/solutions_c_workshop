//Écrivez un programme C qui demande à l’utilisateur un nombre entier n et calcule la somme des n premiers entiers naturels en utilisant une boucle. 
//Par exemple, pour n = 3, la somme est 1 + 2 + 3 = 6.

#include <stdio.h>

int main() {
    int n, i, somme = 0;

    printf("Entrez un entier positif n : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        somme += i;
    }
    printf("La somme des %d premiers entiers naturels est : %d\n", n, somme);

    return 0;
}
