#include <stdio.h>

int main() {
    int congés_accordés;
    int jours_utilises; 
    int statut;
    float congé_restants;

    printf("Nombre total de jours de congés accordés : ");
    scanf("%d", &congés_accordés);

    printf("Nombre de jours de congés utilisés : ");
    scanf("%d", &jours_utilises);

    printf("Statut de l'employé (0 pour temps partiel, 1 pour temps plein) : ");
    scanf("%d", &statut);


    if (jours_utilises > congés_accordés) {
        printf("Alerte: Vous avez excédé les jours de congé accordés !\n");
    } else {

        if (statut == 1) {
            congé_restants = congés_accordés - jours_utilises;
        }
        
         else if (statut == 0) {

            congé_restants = (congés_accordés / 2.0) - jours_utilises;
        } 
        
        else {
            printf("Statut invalide. Veuillez entrer 0 pour temps partiel ou 1 pour temps plein.\n");
        }

        if (congé_restants < 0) {
            printf("Alerte : Vous avez excédé votre portion de jours de congé !\n");
        } else {
            printf("Il vous reste %.2f jours de congé.\n", congé_restants);
        }
    }
    return 0;
}