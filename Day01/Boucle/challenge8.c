//Écrivez un programme C qui génère les n premiers termes de la suite de Fibonacci, où n est entré par l’utilisateur. 
//La suite de Fibonacci est définie comme suit : F(0) = 0, F(1) = 1, et F(n) = F(n-1) + F(n-2).

#include <stdio.h>

int main() {
    int n, i;
    long long int a = 0, b = 1, suivant;

    printf("Entrez le nombre de termes de la suite de Fibonacci : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Veuillez entrer un nombre positif.\n");
    } else if (n == 1) {
        printf("Suite de Fibonacci : %lld\n", a);
    } else {

        printf("Suite de Fibonacci : %lld, %lld", a, b);
        for (i = 3; i <= n; i++) {
            suivant = a + b;  
            printf(", %lld", suivant);
            a = b;  
            b = suivant;
        }
        printf("\n");
    }

    return 0;
}
