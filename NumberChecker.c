#include <stdio.h>

int main()
{
    int GameContinue = 1;
    int counter = 0;
    char* myNum;
    char* Guess;
    printf("Enter your number: ");
    scanf("%s", myNum);

    printf("Your number is %s\n", myNum);

    while(GameContinue)
    {
        printf("\nEnter your guess: ");
        scanf("%s", Guess);

        counter = 0;
        for (int i = 0; i < 4; i++)
        {
            if (myNum[i] == Guess[i]) counter++;

        }
        if (counter >= 4) GameContinue = 0;
        printf("\nThe correct guesses over: %d\n", counter);
    }

    // Game Over
    printf("Game Over\n");
    return 0;
}
