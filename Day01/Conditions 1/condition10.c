#include <stdio.h>
#include <string.h>

int main() {
    int day, month, year;
    char mn[20];

    // input user
    printf("enter date in this format d/m/y: ");
    scanf("%d/%d/%d", &day, &month, &year);

    // organizing months
    switch (month) {
        case 1:  strcpy(mn, "january"); break;
        case 2:  strcpy(mn, "february"); break;
        case 3:  strcpy(mn, "mars"); break;
        case 4:  strcpy(mn, "april"); break;
        case 5:  strcpy(mn, "may"); break;
        case 6:  strcpy(mn, "june"); break;
        case 7:  strcpy(mn, "july"); break;
        case 8:  strcpy(mn, "august"); break;
        case 9:  strcpy(mn, "september"); break;
        case 10: strcpy(mn, "october"); break;
        case 11: strcpy(mn, "november"); break;
        case 12: strcpy(mn, "december"); break;
        default: 
            return 0; 
    }

    printf("%02d-%s-%d\n", day, mn, year);

    return 0; //
}
