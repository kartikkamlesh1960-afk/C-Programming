/* Question 8.
Print 1(true) or 0(false) for following statements :
a. if it's sunday & it's snowing -> true
b. if it's monday or it's raining -> true
c. if a number is greater than 9 & less than 100 -> true*/
#include <stdio.h>

int main() {
    // --- Part a ---
    int isSunday = 1;   // 1 for true, 0 for false
    int isSnowing = 1;
    printf("a: %d\n", isSunday && isSnowing);

    // --- Part b ---
    int isMonday = 0;
    int isRaining = 1;
    printf("b: %d\n", isMonday || isRaining);

    // --- Part c ---
    int number = 45;
    printf("c: %d\n", (number > 9) && (number < 100));

    return 0;
}






//Question 9. Write a program to print the average of 3 numbers.
#include <stdio.h>

int main() {
    float num1, num2, num3, average;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    average = (num1 + num2 + num3) / 3.0;

    printf("Average = %.2f\n", average);

    return 0;
}

// Question 10. Write a program to check if given character is digit or not.








// Question 11. Write a program to print the smallest number










