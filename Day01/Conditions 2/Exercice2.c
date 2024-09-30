#include <stdio.h>

float règles(int age, int typev, int accidents, float prime_base) {
    
    float prime = prime_base; 
// si l'age du conducteur & prime de base *
    if (age < 25) {
        prime = prime * 1.5;
 
    } else if (age >= 25 && age <= 65) {
        prime = prime; 

    } else if (age > 65) {
        prime = prime * 1.2; 
    }
//si le type de voitures & prime*
    if (typev == 1) {
        prime = prime * 2; 

    } else if (typev == 2) {
        prime = prime * 1.2; 

    } else if (typev == 3) {
        prime = prime * 1.1; 
    }

// réglage fonction des accidents
    if (accidents > 1) {
        float Ajoute_accident = prime * 0.3;
        prime = prime + Ajoute_accident;   
    }

    return prime; 
}

int main(){
    int age;
    int typev;
    int accidents;
    float prime_base; 
    float prime_finale;

    printf("Âge du conducteur (en années): ");
    scanf("%d", &age);

    printf("Type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale):  ");
    scanf("%d", &typev);

    printf("Nombre d'accidents au cours des 5 dernières années: ");
    scanf("%d", &accidents);

    printf("Entrez la prime de base: ");
    scanf("%f", &prime_base);

    prime_finale = règles(age, typev, accidents, prime_base);

    printf("La prime d'assurance finale est: %.2f\n", prime_finale);
}