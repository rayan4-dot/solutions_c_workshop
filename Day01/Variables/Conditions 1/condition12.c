#include <stdio.h>

int main() {
    int h1, m1, s1 , h2, m2, s2; 

    // input user
    printf("saisir premier instant (HH:MM:SS): ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("saisir deuxième instant (HH:MM:SS): ");
    scanf("%d:%d:%d", &h2, &m2, &s2);


    if (h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2)) {
        printf("Le premier moment survient avant le deuxième\n");
    } 
    else if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2)) {
        printf("Le second moment survient avant le premier\n");
    } 
    else {
        printf("Il s'agit du même moment.\n");
    }

    return 0; 
}