#include <stdio.h>

int main() {
    int c;

    printf("type the number: ");
    scanf("%d" ,&c);

    if (c < 0 )
    {
        printf("Solide");
    }
    else if ( c >= 0  && c < 100)
    {
        printf("liquid");
    }
    else if (c>100)
    {
        printf("Gaz");
    }
    
    
    
}