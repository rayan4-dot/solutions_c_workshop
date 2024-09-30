#include <stdio.h>

int main(){
    int revenu, score, durée;


    printf("saisir le revenu annuel: ");
    scanf("%d", &revenu);

    printf("saisir le score de crédit: ");
    scanf("%d", &score);

    printf("saisr le durée du prêt");
    scanf("%d", &durée);

    if (revenu >= 30000 && score >= 700 && durée <= 10)
    {
        printf("Éligible");
    }
    else if (revenu >= 30000 && score >= 650 && durée <= 15 )
    {
        printf("Éligible avec conditions");
    }

    else if (revenu < 30000 || score < 650 || durée  > 15)
    {
        printf("Non éligible");
    }
    return 0;
}