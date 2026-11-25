// keep taking numbers an input from users util enters an odd no.
#include<stdio.h>
int main(){
   int n;
   do {
printf("enter your number");
scanf("%d",&n);
printf("%d\n",n);
if(n%2 != 0){
   break;
}
   }while(1);
   printf("thank you");

   return 0;  
}

// keep taking numbers as inputs from users until user enters a number which is multiple of 7

