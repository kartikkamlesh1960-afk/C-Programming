/* C basic practice 
 author: kartik sharma 
 topics: variables

 # To save c language file .c extention is used
 # Complilation = A computer program that translates c code into machine code
 
 ---------- Varibles ----------
 # variable is the name of a memory location which store some data.
 # varibles are case senstive
 # first letter of variables can be a a letter or '_' , no other symbol.
 # no comma or blankspace

 ---------- datatypes ----------
 which type of data you store in a memory and every type of datatype eats different bytes.

 ---------- constants ----------
  where values don't change(fixed)
  integer constants(1,2,3,0,-1,-2)
  real constants (1.0,2.0,3.14)
  character constants ('a','A','&') 

 ---------- keywords ----------
 reserved words that have speacial meaning to the compliler.
 there are 32 keywords in c (auto,int,return,static,while,float,continue etc.)

 singli line comment -> //......
 multi line comment  -> /*......*/

/* printf is for printing output.
 scanf is for taking input.
 %d, %f, %c are known as format specifiers.*/

// THE first code
/* C basic practice 
 author: kartik sharma 
 topics: variables

 to save c language file .c extention is used

 ---------- Varibles ----------
 variable is the name of a memory location which store some data.
 varibles are case senstive
 first letter of variables can be a a letter or '_' , no other symbol.
 no comma or blankspace

 ---------- datatypes ----------
 which type of data you store in a memory and every type of datatype eats different bytes.

 ---------- constants ----------
  where values don't change(fixed)
  integer constants(1,2,3,0,-1,-2)
  real constants (1.0,2.0,3.14)
  character constants ('a','A','&') 

 ---------- keywords ----------
 reserved words that have speacial meaning to the compliler.
 there are 32 keywords in c (auto,int,return,static,while,float,continue etc.)

 singli line comment -> //......
 multi line comment  -> /*......*/

/* printf is for printing output.
 scanf is for taking input. & = address of a variable
 %d, %f, %c are known as format specifiers.*/

// THE first code
 # include<stdio.h>            // pre processor directive
int main()                    
{      
    printf("hello world\n");
    printf("hello c\n");                
     
     int number = 25;
     char star = '*';
     float pi = 3.14;
    printf("age is %d\n", number);       // %d is for integer        
    printf("value is %f\n", pi);   // %f is for real numbers
    printf("value is %c\n", star);    // %c is for characters
    
    int age ;
    printf("enter age :");
    scanf("%d",&age);
    printf("age is : %d\n", age);

    // 1. write a program to calculate sum of two numbers 
    int a,b ;
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);
    int sum = a + b;
    printf("sum is : %d", sum); // or printf("sum is : %d", a+b);

    // 2. Write a program to calculate area of a circle
    int side;
    printf("enter length of side ");
    scanf("%d",&side);
    printf("area in : %d", side * side);
    
    return 0;

}
