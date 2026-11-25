/* Function and recursion
 block of code that performs particular task
it can be used multiple times
increase code reusability

void printhello(){  <-function prototype
   print("hello");  <-function definition
}
int main(){         <-function call
printhello();       <-calling statement
return 0;
}

*/

#include<stdio.h>
//declaration/prototype
void printhello();

int main(){
   printhello(); //function call
   printhello();
   printhello();
   return 0;
}


// function defination
void printhello(){
   printf("hello!");
   printf("my name is kartik\n");
}

/* properties of function -
1. execution always starts from main
2. a function get called directly or indirectly from main
3. there can be multiple functions in a program

types of function -
1. library function - speacial function which are built in c (scanf() , printf())
2. user defined fuction - declared and defined by programmer

passing arguments -
function can take some value (parameter) and give some value (return value)
void printhello();
void printtable(int n);
int sum(int a,int b);
*/
