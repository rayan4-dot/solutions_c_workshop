#include <stdio.h>

int main() {
    float moyen;

    // input user
    printf("saisir la moyenne des notes: ");
    scanf("%f", &moyen);

    // check the grade level
    if (moyen < 10) {
        printf("Note atteinte: Recalé\n");
    } 
    else if (moyen >= 10 && moyen < 12) {
        printf("Note atteinte: Passable\n");
    } 
    else if (moyen >= 12 && moyen < 14) {
        printf("Note atteinte: Assez Bien\n");
    } 
    else if (moyen >= 14 && moyen < 16) {
        printf("Note atteinte: B-ien\n");
    } 
    else { 
        printf("Note atteinte: Très Bien\n");
    }

    return 0; 
}