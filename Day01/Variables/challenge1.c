#include <stdio.h>

int main() {
    char nom[100];
    char prenom[100];
    char gender[100];
    char email[100];
    int age;


    printf("enter your name: ");
    scanf("%s", nom);

    printf("enter your surename: ");
    scanf("%s", prenom);

    printf("write your age : ");

    scanf("%d", &age);
    printf("specify your gender : ");
    scanf("%s", gender);

    printf("write your email : ");
    scanf("%s", email);


    printf("Checking Info\n");
    printf("nom : %s\n", nom);

    printf("prénom : %s\n", prenom);

    printf("age : %d\n", age);

    printf("gender : %s\n", gender);
    
    printf("email : %s\n", email);

    return 0;
}

