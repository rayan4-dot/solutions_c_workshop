#include <stdio.h>

int main() {
    float score, bonus;
    int ancienneté, récompenses;
    
    //  évaluer la performance d'un employé
    printf("Score de performance (de 0 à 100) : ");
    scanf("%f", &score);
    
    printf("Ancienneté (en années) : ");
    scanf("%d", &ancienneté);
    
    printf("Récompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus) : ");
    scanf("%d", &récompenses);


    if (score >= 90 && ancienneté >= 5 ){
        printf("Excellente");
    } else if (score >= 75 && ancienneté >= 3){
        printf("Bonne");  
    } else if (score >= 50 && ancienneté < 3) {
        printf("Satisfaisante");
    } else {
        printf("Insuffisante");
    }
        

    // if statements
    if (récompenses == 1) {
        bonus = score * 0.10;  // 10% bonus
    } else if (récompenses >= 2) {
        bonus = score * 0.20;  // 20% bonus
    } 

    if (bonus > 0) {
        printf("Bonus  : %.2f\n", bonus);
    } else {
        printf("Aucun bonus attribué.\n");
    }

    return 0;

}
