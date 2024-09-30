//Écrivez un programme C qui demande un nombre entier n et affiche les n premiers nombres pairs. 
//Par exemple, pour n = 4, affichez : 2, 4, 6, 8.


#include <stdio.h>

int main() {
    int n, i;

    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);

    printf("Les %d premiers nombres pairs sont : ", n);

    for (i = 1; i <= n; i++) {
        printf("%d", 2 * i);
        if (i < n) {
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}
