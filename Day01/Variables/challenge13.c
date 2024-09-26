#include <stdio.h>

void binaire(int a){
    if(a>1){
        binaire(a / 2);
    }
    printf("%d ", a % 2 );
}
int main() {
    unsigned int num;

    printf("Entrez un nombre entier: ");
    scanf("%u", &num);
    printf("Equivalent hexadécimal : %x\n", num);  
    

    printf("Equivalent binaire : ");
    binaire(num);  
    printf("\n");  

    return 0;
}