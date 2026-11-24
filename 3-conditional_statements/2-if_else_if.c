/*An if-else if statement (often called an if-else-if ladder) is a programming control structure used to test multiple conditions sequentially
and execute a specific block of code for the first condition that evaluates to true*/


#include<stdio.h>
int main(){
    int age ;
    printf("enter age : ");
    scanf("%d",&age);

if(age >= 18){                      
    printf(" adult \n");   
    
}
else if(age > 13 && age<=18){
    printf("teenager\n");
}
else{
    printf("child");
}
return 0;
}
