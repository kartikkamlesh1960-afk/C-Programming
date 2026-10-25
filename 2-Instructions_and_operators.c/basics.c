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

return 0;
}
