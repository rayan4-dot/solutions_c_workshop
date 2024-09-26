#include <stdio.h>

int main (){
    int nombre , r;

    printf("entrez le nombre:");
    scanf("%d", &nombre);

    printf("Table de multiplication de: %d\n", nombre);
    for (r == 1 ; r <= 10; r++){
        printf("%d*%d= %d\n", nombre , r, nombre*r);
    }
    return 0;
}