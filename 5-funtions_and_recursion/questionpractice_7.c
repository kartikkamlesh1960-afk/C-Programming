// write a function that print namaste for indian users and bounjour for french users
#include <stdio.h>

void printIndian();
void printFrench();

int main() {
    char nation;
    printf("Enter 'i' for Indian or 'f' for French: ");
    scanf(" %c", &nation);

    if (nation == 'i' || nation == 'I') {
        printIndian();
    } 
    else if (nation == 'f' || nation == 'F') {
        printFrench();
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}

void printIndian() {
    printf("Namaste!\n");
}

void printFrench() {
    printf("Bonjour :)\n");
}
