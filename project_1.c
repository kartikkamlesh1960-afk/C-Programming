#include <stdio.h>

int main()
{
    int answer;
    int suspect;
printf("                                                                 THE MURDER\n");
printf("                                 You are a detective. A person has been murdered. There are three suspects:\n");
printf("   1. BEN\n");
printf("   2. EVA\n");
printf("   3. CIA\n");
printf("   you must answer to find the killer\n");
printf("--------------------------------------------------------------------------------------------------------------------------------------------\n");
printf("     CHALLENGE 1\n");
printf("--------------------------------------------------------------------------------------------------------------------------------------------\n");                                        

printf("I only have a face and two hands but i cannot clap. who am I ? \n");
printf("1.Toaster\n");
printf("2.Clock\n");
printf("3.Mirror\n");
printf("Enter your answer\n");
scanf("%d", &answer);

if (answer == 2)
{
printf("correct\n");
}
else
{
    printf("wrong.murderer escaped\n");
    return 0;
}
printf("-------------------\n");
printf("      CHALLENGE 2\n");
printf("-------------------\n");
printf("What is the symbol of imaginary complex number\n");
printf("1. i\n");
printf("2. x\n");
printf("3. h\n");
printf("Enter your answer\n");
scanf("%d",&answer);

if (answer == 1)
{
    printf("correct\n");
}
else
{
    printf("wrong. murderer escaped\n");
    return 0;
}
printf("-------------------\n");
printf("     CHALLENGE 3\n");
printf("-------------------\n");
printf("Which one of the following is noble gas\n");
printf("1. oxygen\n");
printf("2. argon\n");
printf("3. nitrogen\n");
printf("Enter your answer\n");
scanf("%d",&answer);
if (answer == 2)
{
    printf("correct\n");
}
else
{
    printf("wrong. murderer escaped\n");
    return 0;
}
printf("clues solved!\n");
printf("Your clues are as follows :-\n");
printf(" 1. Clock\n");
printf(" 2. I\n");
printf(" 3. Argon\n");
printf("who is the murderer?\n");
scanf("%d", &suspect);
switch (suspect)
{
    case 1:
    printf("wrong! ben is innocent");
    break;
    
    case 2:
    printf("wrong! eva is innocent");
    break;
   
    case 3:
    printf("you caught the killer");
    break;
    
}
return 0;
}
