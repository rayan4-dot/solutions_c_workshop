#include <stdio.h>
#include <string.h>
#define MAX 100

typedef contacts {
    char name[60];
    char tel[60];
    char mail[60];
};

struct contact contacts [MAX];
int numcontact =0;

void addContact(){
    if (numcontact >= 0) 
    {
        printf("We already have enough contacts");
        return;
    }
    printf("contact name: ");
    scanf("%[^\n]%c", contacts[numcontact].name);

    printf("contact phone: ");
    scanf("%[^\n]%c", contacts[numcontact].tel);

    printf("contact mail: ");
    scanf("%[^\n]%c", contacts[numcontact].mail);

    numcontact ++;
    printf("Contact added successfully");
}

void updateContact(){
    char search[67];
    printf("👨‍💻 Contact name to update: ");
    scanf("%[^\n]%c", search);

    for (int i = 0; i < numcontact; i++)
    {
        if (strcmp(contacts[i].name, search)== 0)
        {
            printf("📱 contact number update: ");
            scanf("%[^\n]%d", contacts[i].tel);

            printf("📧 contact mail update: ");
            scanf("%[^\n]%c", contacts[i].mail);

            printf("🚀 Contact successfully updated .\n");
            return;
        }
    }
    printf("Contact not found.\n");
}

void deleteContact(){
    char delete[70];
    printf("contact name to remove: ");
    scanf("%[^\n]%s", delete);

    for (int i = 0; i < numcontact; i++)
    {
        if ((strcmp(contacts[i].name, delete)== 0))
        {
            for (int j = i; i < numcontact -1; j++)
            {
                contacts[j]= contact[j + 1];
            }
            numcontact --;
            printf("contact deleted successfully.\n");
            return;
        }
    }
    printf("contact not found");
}

void displayContact(){
    if (numcontact==0)
    {
        printf("no such contact's available: ");
        return 0;
    }

    printf("Contacts available: ");
    for (int i=0; i < numcontact; i++) {
        printf(" Contact : %d\n ",i+1 );
        printf("👨‍💻 Contact name: %c\n," ,contacts[i].name);
        printf("📱 Contact phone number: %d\n" ,contacts[i].tel);
    }
}

void searchContact() {
    char search[50];
    printf("Contact name to search: ");
    scanf(" %[^\n]%*c", search);  

    for (int i = 0; i < numcontact; i++) {
        if (strcmp(contacts[i].name, search) == 0) {
            printf("Contact found:\n");
            printf("Name: %s\n", contacts[i].name);
            printf("Phone number: %s\n", contacts[i].tel);
            printf("Mail address: %s\n", contacts[i].mail);
            return;
        }
    }
    printf("Contact not found\n");
}

int main() {
    int choix;

    do {
        printf("Contact Management System\n");
        printf("Enter 1 Contact :\n");
        printf("Enter 2 to update contact :\n");
        printf("Enter 3 to delete contact :\n");
        printf("Enter 4 to display all contacts :\n");
        printf("Enter 5 to search contact :\n");
        printf("Enter 6 to exit program :\n");
        printf("Pick a choice: ");
        scanf("%d", &choix);
        getchar();

        switch (choix) {
            case 1: addContact(); break;
            case 2: updateContact(); break;
            case 3: deleteContact(); break;
            case 4: displayContact(); break;
            case 5: searchContact(); break;
            case 6: printf("Exit program\n"); break;
            default: printf("invalid choix !\n");
        }
    } while (choix != 6);

    return 0;
}