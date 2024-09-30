//Écrivez un programme C qui demande à l’utilisateur un entier positif et compte le nombre de chiffres dans cet entier.
// Par exemple, pour n = 12345, affichez : Nombre de chiffres = 5.

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Entrez un entier positif : ");
    scanf("%d", &n);
    if (n == 0) {
        count = 1;
    } else {
        while (n != 0) {
            n = n / 10;
            count++;
        }
    }
    printf("Nombre de chiffres = %d\n", count);

    return 0;
}
