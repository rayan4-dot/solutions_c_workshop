#include <stdio.h>

unsigned int année, counter;   //  to store the year and a counter
char lechoix; // to store the user choice

int main() {

    printf("Entrez le nombre d'années : ");
    scanf("%d", &année);

   
    printf("Entrez un choix (M pour Mois, J pour Jours, H pour Heures, m pour Minutes, S pour Secondes) : ");
    scanf(" %c", &lechoix); 

    
    counter = année;

    
    switch(lechoix) {
        case 'M': 
            année = 12 * année;
            printf("Pour %d années, cela équivaut à %d mois\n", counter, année);
            break;

        case 'J': 
            année = année * 12 * 30;
            printf("Pour %d années, cela équivaut à %d jours\n", counter, année);
            break;

        case 'H': 
            année = année * 12 * 30 * 24;
            printf("Pour %d années, cela équivaut à %d heures\n", counter, année);
            break;

        case 'm':
            année = année * 12 * 30 * 24 * 60;
            printf("Pour %d années, cela équivaut à %d minutes\n", counter, année);
            break;
            
        case 'S':
            année = année * 12 * 30 * 24 * 60 * 60;
            printf("Pour %d années, cela équivaut à %d secondes\n", counter, année);
            break;

        default: 
            printf("Choix invalide. Veuillez entrer M, J, H, m ou S.\n");
            break;
    }
    return 0;
}
