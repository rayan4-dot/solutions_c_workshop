#include <stdio.h>

int main() {
    int n;

    // User Input
    printf("Type integer: ");
    scanf("%d", &n);

    // Verify if input is pair or impair
    if (n % 2 == 0) {
        printf("the number %d is pair.\n", n);
    } else {
        printf("The number %d is impair.\n", n);
    }

    return 0;
}
