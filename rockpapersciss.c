#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int playerChoice;
    int machineChoice;

    srand(time(NULL));
    machineChoice = rand() % 3 + 1;

    printf("Welcome to rock, paper, scissors!\n");
    printf("Please select a choice: 1. Rock 2. Paper 3. Scissors 4. Quit\n");
    scanf("%d", &playerChoice);

    if (playerChoice == 1)
        printf("Player Chose: Rock\n");
    else if (playerChoice == 2)
        printf("Player Chose: Paper\n");
    else if (playerChoice == 3)
        printf("Player Chose: Scissors\n");

    if (machineChoice == 1)
        printf("Machine Chose: Rock\n");
    else if (machineChoice == 2)
        printf("Machine Chose: Paper\n");
    else
        printf("Machine Chose: Scissors\n");

    if ((playerChoice == 1 && machineChoice == 3) ||
        (playerChoice == 2 && machineChoice == 1) ||
        (playerChoice == 3 && machineChoice == 2)) {
        printf("Congratulations, You've Won!\n");
    }

    else if ((playerChoice == 1 && machineChoice == 2) ||
             (playerChoice == 2 && machineChoice == 3) ||
             (playerChoice == 3 && machineChoice == 1)) {
        printf("Unlucky, You've Lost!\n");
    }

    else if (playerChoice == machineChoice) {
        printf("It's a draw!\n");
    }

    if (playerChoice == 4) {
        printf("Goodbye!\n");
        exit(0);
    }

    return 0;
}


