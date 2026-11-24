/* Question 8.
Print 1(true) or 0(false) for following statements :
a. if it's sunday & it's snowing -> true
b. if it's monday or it's raining -> true
c. if a number is greater than 9 & less than 100 -> true*/
#include<stdio.h>
int main(){
int a,sun = 1,mon =0,snow = 1,rain = 1 ;          
printf("a : %d\n ", sun && snow);           // if sun and snow both are true the && follows the trend 
printf("b : %d\n ", mon || rain);          // now from both mon and rain if singe one is true the || is also true
printf("take a number a : ");
scanf("%d",&a);
printf("c : %d\n ", a>9  && a<100 ); 
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
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Characters '0' through '9' have consecutive ASCII values
    if (ch >= '0' && ch <= '9') {
        printf("'%c' is a digit.\n", ch);
    } else {
        printf("'%c' is not a digit.\n", ch);
    }

    return 0;
}

// Question 11. Write a program to print the smallest number
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c) {
        printf("Smallest number is: %d\n", a);
    } else if (b <= a && b <= c) {
        printf("Smallest number is: %d\n", b);
    } else {
        printf("Smallest number is: %d\n", c);
    }

    return 0;
}
