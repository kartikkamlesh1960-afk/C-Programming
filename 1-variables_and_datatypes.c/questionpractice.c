 // 1. write a program to calculate sum of two numbers 
#include<stdio.h>
int main(){
    int a,b ;
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);
    int sum = a + b;
    printf("sum is : %d", sum); // or printf("sum is : %d", a+b);

    // 2. Write a program to calculate area of a square
    int side;
    printf("\nenter length of one side of square ");
    scanf("%d",&side);
    printf("area of square is : %d", side * side);
    
    return 0;
    
}
