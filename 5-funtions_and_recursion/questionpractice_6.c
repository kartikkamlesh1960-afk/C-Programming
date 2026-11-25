// write two function 1st to print "hello" & 2nd to print "good bye"
#include<stdio.h>

void printhello();
void printgoodbye();
int main(){
  printhello();
  printgoodbye(); 
  printgoodbye();
   return 0;
}
 
void printhello(){
   printf("hello!\n");
}
void printgoodbye(){
   printf("good bye :)\n");
}
