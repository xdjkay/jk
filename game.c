#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playerChoice, computerChoice;
    srand(time(0)); // Initialize random seed

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Choose an option:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Your choice: ");
    scanf("%d", &playerChoice);

    if (playerChoice < 1 || playerChoice > 3) {
        printf("Invalid choice. Please select a number between 1 and 3.\n");
        return 0;
    }

    computerChoice = rand() % 3 + 1;

    printf("Computer chooses: ");
    switch (computerChoice) {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }

    printf("Result: ");
    if (playerChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if (
        (playerChoice == 1 && computerChoice == 3) ||
        (playerChoice == 2 && computerChoice == 1) ||
        (playerChoice == 3 && computerChoice == 2)
    ) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
