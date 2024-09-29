#include <stdio.h>

void voyage(float budget, int destination, int personnes) {}
int main() {
    float budget;
    int destination, personnes;
    
    printf("budget (en euros) : ");
    scanf("%f", &budget);
    printf("destination (1 pour plage, 2 pour montagne, 3 pour ville) : ");
    scanf("%d", &destination);
    printf("nombre de personnes : ");
    scanf("%d", &personnes);

        if (budget >= 1000) {
        printf("Voyage haut de gamme\n");
    } else if (budget >= 500 && budget < 1000) {
        printf("Voyage moyen\n");
    } else {
        printf("Voyage economique\n");
    }


    switch (destination) {
        case 1:
            if (budget >= 1000 && personnes > 2) {
                printf("Recommandation : Plage\n");
            } else {
                printf("La plage n'est pas recommandée avec votre budget et nombre de personnes.\n");
            }
            break;
        case 2:
            if (budget >= 500 && personnes <= 2) {
                printf("Recommandation : Montagne\n");
            } else {
                printf("La montagne n'est pas recommandée avec votre budget et nombre de personnes.\n");
            }
            break;
        case 3:
            printf("Recommandation : Ville\n");
            break;
        default:
            printf("Destination inconnue.\n");
            break;
    }
 
    voyage(budget, destination, personnes);

    return 0;
}
