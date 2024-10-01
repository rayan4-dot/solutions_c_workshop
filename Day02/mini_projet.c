#include<stdio.h>
#include<string.h>
#define MAX 100

char title[MAX][100];   
char author[MAX][100];  
int quantity[MAX];     
float price[MAX];      
int amount = 0;

void add() {
    if (amount >= MAX) {
        printf("We have already added 100 books.\n");
        return;      
    }

    printf("Type the title name: ");
    scanf("%s", title[amount]);

    printf("Type the author name: ");
    scanf("%s", author[amount]);

    printf("Type the quantity: ");
    scanf("%d", &quantity[amount]);

    printf("Type the price: ");
    scanf("%f", &price[amount]);

    amount++;
    printf("Book added successfully\n");
}

void display() {
    if (amount == 0) {
        printf("There are no books available.\n");
        return;
    }

    printf("Books available:\n");
    for (int i = 0; i < amount; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", title[i]);
        printf("Author: %s\n", author[i]);
        printf("Price: %.2f\n", price[i]);
        printf("Quantity: %d\n\n", quantity[i]);
    }
}

void update() {
    char titlesearch[50];
    printf("Type the book title for update: ");
    scanf("%s", titlesearch);

    for (int i = 0; i < amount; i++) {
        if (strcmp(title[i], titlesearch) == 0) {
            printf("New quantity: ");
            scanf("%d", &quantity[i]);
            printf("Updated quantity.\n");
            return;
        }
    }
    printf("Book not found.\n");
}

void delete() {
    char titlesearch[50];
    printf("Type the title of the book to remove: ");
    scanf("%s", titlesearch);

    for (int i = 0; i < amount; i++) {
        if (strcmp(title[i], titlesearch) == 0) {
            for (int j = i; j < amount - 1; j++) {
                strcpy(title[j], title[j + 1]);
                strcpy(author[j], author[j + 1]);
                price[j] = price[j + 1];
                quantity[j] = quantity[j + 1];
            }
            amount--;
            printf("Book deleted successfully.\n");
            return;
        }
    }
    printf("Book not found.\n");
}
void totaldisplay() {
    printf("Current number of books in the system: %d\n", amount);
}
int main() {
    int choix;
    do {
        printf("Bookstore Management System\n");
        printf("1. Add a book to stock\n");
        printf("2. Display available books\n");
        printf("3. \nUpdate book quantity\n");
        printf("4. \n Delete a book from stock\n");
        printf("5. Display total number of books in stock\n");
        printf("6. Exit program\n");
        printf("Type your choice: ");
        scanf("%d", &choix);

        switch(choix) {
            case 1: add(); break;
            case 2: display(); break;
            case 3: update(); break;
            case 4: delete(); break;
            case 5: totaldisplay(); break;
            case 6: printf("Program exit.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while(choix != 6);

    return 0;
}
