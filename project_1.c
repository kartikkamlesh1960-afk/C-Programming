#include <stdio.h>

int main()
{
    int answer;
    int suspect;
    char name[30];

    printf("                                                                 THE MURDER\n");
    printf("                                            You are a detective. A person has been murdered.\n");
    printf("                                               There are three suspects: BEN, EVA and CIA.\n");
    printf("                                           You must answer the challenges to find the killer.\n");
    printf("--------------------------------------------------------------------------------------------------------------------------------------------\n");

    printf("Enter your detective name: ");
    scanf("%s", name);

    printf("\nWelcome Detective %s!\n", name);
    printf("Your mission is to find the murderer.\n");

    printf("--------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("     CHALLENGE 1\n");
    printf("--------------------------------------------------------------------------------------------------------------------------------------------\n");

    printf("I only have a face and two hands but I cannot clap. Who am I?\n");
    printf("1. Toaster\n");
    printf("2. Clock\n");
    printf("3. Mirror\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("Correct, Detective %s!\n", name);
    }
    else
    {
        printf("Wrong. Murderer escaped.\n");
        return 0;
    }

    printf("-------------------\n");
    printf("      CHALLENGE 2\n");
    printf("-------------------\n");

    printf("What is the symbol of imaginary complex number?\n");
    printf("1. i\n");
    printf("2. x\n");
    printf("3. h\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
    {
        printf("Correct, Detective %s!\n", name);
    }
    else
    {
        printf("Wrong. Murderer escaped.\n");
        return 0;
    }

    printf("-------------------\n");
    printf("     CHALLENGE 3\n");
    printf("-------------------\n");

    printf("Which one of the following is noble gas?\n");
    printf("1. Oxygen\n");
    printf("2. Argon\n");
    printf("3. Nitrogen\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("Correct, Detective %s!\n", name);
    }
    else
    {
        printf("Wrong. Murderer escaped.\n");
        return 0;
    }

    printf("\nClues solved!\n");

    printf("Your clues are as follows:\n");
    printf("1. Clock\n");
    printf("2. i\n");
    printf("3. Argon\n");

    printf("\nDetective %s, who is the murderer?\n", name);
    printf("1. BEN\n");
    printf("2. EVA\n");
    printf("3. CIA\n");

    scanf("%d", &suspect);

    switch (suspect)
    {
        case 1:
            printf("Wrong! BEN is innocent.\n");
            break;

        case 2:
            printf("Wrong! EVA is innocent.\n");
            break;

        case 3:
            printf("Congratulations Detective %s!\n", name);
            printf("You caught the killer!\n");
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
