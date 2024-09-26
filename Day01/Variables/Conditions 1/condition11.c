#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    const char *daysOfWeek[] = {
        "Monday",
        "tuesday",
        "wednesday",
        "thursday",
        "friday",
        "saturday",
        "sunday"
    };

// random number generator

    srand(time(NULL));

    int randomIndex = rand() % 7;


    printf("jour de la semaine sélectionné : %s\n", daysOfWeek[randomIndex]);

    return 0; 
}
