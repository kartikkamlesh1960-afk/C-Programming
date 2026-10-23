/* ---------- conditional statements ----------
   A conditional statement is a logical "if-then" expression that connects a condition to a result or action (written as If p then q), 
   where the first part is the hypothesis and the second part is the conclusion.
Types of conditional statements ->
 a = if-else statement
    if(condition){
      (true)
     }
    else{
    (false)
     } */

#include<stdio.h>
int main(){
    int age ;
    printf("enter age : ");
    scanf("%d",&age);
if(age > 18){
    printf(" you are adult \n");
}
else{
    printf("you are not adult \n");
}
return 0;
}

/* ---------- conditional operator -> ternary ----------
-> condition? dosomething if true : do something if false;
#include<stdio.h>
int main(){
    int age ;
    printf("enter age : ");
    scanf("%d",&age);

    age >=18 ? printf("adult \n") : printf("not adult \n");
    return 0;
}
/* ---------- conditional operator -> switch ----------
switch(number){
case c1://do something
       break;
case c2://do something
       break;
default://do something (like else)

}
*/
