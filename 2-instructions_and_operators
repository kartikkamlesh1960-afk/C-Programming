/** ---------- instructions ----------
     they are the statements in a program 
     types of instructions are
 1. Type declaration instruction - declarion of varibles before using it 
      eg. int a = 22;              valid
      b = a;                       valid
      int c = b+1;                 valid
      int d = 1,e;                 valid

      int oldage = 22;
      int newage = oldage + years;  [not valid]
      int years = 2;                [because years variable is used before it was assigned]  
       
 2. Arithmetic instructions - 
      int a = 1 ;
      int b = 2 ;
      int sum = a + b ;
      int multiply = a*b; 
      int modular= a%b ; [use for only integer , numerator tells the sign of modular]

      - For power function we use #include<math.h>
      a and b are operands where as (+) an is operator

      - in type conversion int operation with int gives int .
               float operation with float gives float .
               int operation with float also gives float .
      - type of conversion are implicit which is already compleated by compiler whereas explicit conversion is done by us .
      - operator precedence = *,/,%  ->  +,-  ->  =
        for same precedence order is from left to right   
3. Control instructions -
   used to determine flow of program
   a. sequence control [like in question no. 4]
   b. decision control [ if,else]
   c. loop control     [ for , while ]
   d. case control     [ according to cases ]

*/
                     
#include<stdio.h>
#include<math.h>
int main(){
     int b, c;
     b = c = 5;
     int a = b + c;
     printf("%d\n", a);
     int power = pow(b,c);
     printf("%d\n",power);

// Question 3. write a program for type conversing f in whcih decimal should not be there
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
 
/* ----------- Operators ----------
  true = 1 and 0 = false
   a. arithmetic operator -> +, -, /,*,%
   b. Relational operator -> == (eq. to), >, >=, <, <=, != (not eq. to)
   c. logical operator -> && (and) , || (or) , ! (not)
   d. bitwise operator [^]
   e. assignment operator -> =, +=, -=, *=, /=, %=
   f. ternary operator  
-> precedence operator = !  ->  *,/,%  ->  <,>,<=,>=  ->  ==,!=  ->  &&  ->  ||  -> = */
printf("%d\n",3>=3);
printf("%d\n",3<=3);
printf("%d\n",4>=3);
printf("%d\n",4<=3);
printf("%d\n",4==3);
printf("%d\n",4!=3);
printf("%d\n",4>3 && 3>4);
printf("%d\n",4>3 || 3>4);
printf("%d\n", !((5>1)||(3>4)));
int p = 2;
int q = 3;
printf("%d\n",p += q);

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

/* Question 8.
Print 1(true) or 0(false) for following statements :
a. if it's sunday & it's snowing -> true
b. if it's monday or it's raining -> true
c. if a number is greater than 9 & less than 100 -> true*/







//Question 9. Write a program to print the average of 3 numbers.









// Question 10. Write a program to check if given character is digit or not.








// Question 11. Write a program to print the smallest number










return 0;
}
