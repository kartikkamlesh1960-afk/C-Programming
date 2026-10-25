// Question 3. write a program for type conversing f in whcih decimal should not be there
#include<stdio.h>
int main(){
     int f = (int) 1.99999;
     printf("%d \n",f);

// Question 4. a. 5*2-2*3
                  int l = 5 * 2 - 3 * 2 ;
                  printf("%d\n",l);
//        b. 5 * 2 / 2 * 3
             int m = 5 * 2 / 2 * 3 ;
             printf("%d\n",m);
//        c. 5*(2/2)*3
             int n = 5*(2/2)*3;
             printf("%d\n",n);
//        d.5+2/2*3
             int o = 5+2/2*3;
             printf("%d\n",o);

// Question 5. write a program to check if a number is disible by 2 or not.
int r ;
printf("enter your number :");
scanf("%d",&r);
printf("%d\n",r % 2 == 0);

// Question 6.(similar type ques. as 5th) Check if a number is odd or even.
int s ;
printf("enter number for checking if even or odd :\n ");
scanf("%d\n", &s); // even -> 1 odd  -> 0
printf("%d",s % 2 == 0);

/* Question 7. Are the following valid or not?
   a. int a = 8^8 
      compiler will not show any error in this case 
      as ^ is an bitwise operator 
      so if same number has xor with same number compiler gives 0
   b. int x;int y =x;
      as int x was declaired before using it in int y
      no error will be shown
   c. int x,y=x;
      due to type declaration rule x can't be used in same line in which it is declaired
      hence error will be shown
   d. char stars = '**';
      in char only single element should be cantained also space can't be there 
      hence there will be error */
return 0;
}
