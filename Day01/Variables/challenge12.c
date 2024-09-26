#include <stdio.h>

int main() {
    int number;
    int unit, tens, hundreds, thousands, inverse;

    // Input 
    printf("Enter a four-digit number : ");
    scanf("%d", &number);

    if (number < 1000 || number > 9999) {
        printf("Error:\n");
        return 0;  
    }
     // 4//                      // 3//                          //2//                        //1//
    thousands = number / 1000 , hundreds = (number / 100) % 10 , tens = (number / 10) % 10 , unit = (number % 10);                 

    // reforming reversed sequence
    inverse = (unit * 1000) + (tens * 100) + (hundreds * 10) + thousands;

    printf("Reversed number is : %d\n", inverse);

    return 0;  
}
