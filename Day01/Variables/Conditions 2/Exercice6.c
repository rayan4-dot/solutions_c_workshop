#include <stdio.h>

int main() {
    float consommation, tarif, facture;
    int type_utilisateur, type_contrat;

    printf("Consommation d'électricité (en kWh): ");
    scanf("%f", &consommation);

    printf("Type d'utilisateur (1 pour résidentiel, 2 pour commercial): ");
    scanf("%d", &type_utilisateur);

    printf("Type de contrat (0 pour standard, 1 pour réduit) : ");
    scanf("%d", &type_contrat);

    if (type_utilisateur == 1) {  
        if (type_contrat == 0) {   
            tarif = 0.20;  
        } else {
            tarif = 0.15;  
        }
    } else if (type_utilisateur == 2) {  
        if (type_contrat == 0) {
            tarif = 0.30;  
        } else {
            tarif = 0.25;  
        }
    } 

     if (consommation > 500) {
        facture * 0.10;
    }

    facture = consommation * tarif;
    
    printf("La facture d'électricité est : %.2f €\n", facture);

    return 0;
}
