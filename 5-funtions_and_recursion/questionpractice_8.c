// A sum calculator
#include <stdio.h>
int sum(int a,int b);
int main() {
    int a,b;
    printf("Enter first number: ");
    scanf(" %d", &a);
    printf("enter second number: ");
    scanf("%d",&b);

    int s = sum(a,b);
    printf("sum is :%d \n",s);
    return 0;
}

int sum(int x,int y){
   return x + y;
}

// use library functions to calculate the square of a number given by user











// write a function to calculate area of square, a circle & a rectangle .
