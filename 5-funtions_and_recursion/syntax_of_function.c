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
