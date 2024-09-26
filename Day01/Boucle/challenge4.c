#include<stdio.h>
int main(){
    int n, i;

    printf("saisir l'entier: ");
    scanf("%d", n);

    if (n<0) {
        printf("sois l'entier positif \n");
    }
    printf("les nombres d'entier %d sont:");
   for ( i = 0; i < n; i++) {
        printf("%d", 2 * i + 1); 
        if (i < n - 1)
            printf(", ");      
    }
printf("\n");
    return 0;
}