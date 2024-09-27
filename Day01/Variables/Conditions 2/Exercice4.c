#include <stdio.h>

int main() {
    float score, score_bonus;
    int ancienneté, récompenses;
    
    //  évaluer la performance d'un employé
    printf("Score de performance (de 0 à 100) : ");
    scanf("%f", &score);
    
    printf("Ancienneté (en années) : ");
    scanf("%d", &ancienneté);
    
    printf("Récompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus) : ");
    scanf("%d", &récompenses);
    
    // if statements
    if (récompenses == 1) {
        score_bonus = score * 1.10;  // 10% de bonus
    } else if (récompenses >= 2) {
        score_bonus = score * 1.20;  // 20% de bonus
    } else {
        score_bonus = score;
    }
    
    // Limite le score au maximum de 100
    if (score_bonus > 100) {
        score_bonus = 100;
    }
    
    // Évaluation de la performance
    printf("Score après bonus: %.2f\n", score_bonus);
    
    if (score_bonus >= 90 && ancienneté >= 5) {
        printf("Évaluation: Excellente\n");
    } else if (score_bonus >= 75 && ancienneté >= 3) {
        printf("Évaluation: Bonne\n");
    } else if (score_bonus >= 50 && ancienneté < 3) {
        printf("Évaluation: Satisfaisante\n");
    } else {
        printf("Évaluation: Insuffisante\n");
    }

    return 0;
}
