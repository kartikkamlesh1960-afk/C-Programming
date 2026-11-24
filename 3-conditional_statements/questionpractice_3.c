#include <stdio.h>

int main() {
    // 1. Check if a student passed or failed
    int marks;
    printf("Write your marks: ");
    scanf("%d", &marks);

    if (marks >= 30) { // Changed > to >= so 30 is a pass
        printf("PASS\n\n");
    } else {
        printf("FAIL\n\n");
    }

    // 2. Check if a character is uppercase or not
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); // Notice the space before %c

    if (ch >= 'A' && ch <= 'Z') {
        printf("Upper case\n");
    } else if (ch >= 'a' && ch <= 'z') { // Fixed 'a' to 'z'
        printf("Lower case\n");
    } else {
        printf("Not an English letter\n");
    }

    return 0;
}
