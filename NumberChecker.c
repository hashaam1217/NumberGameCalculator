#include <stdio.h>
#include <string.h>

int main()
{
    int GameContinue = 1;
    int counter = 0;
    int size = 0;
    char* myNum;
    char* Guess;
    printf("Enter your phrase: ");
    scanf("%s", myNum);

    printf("Your phrase is %s\n", myNum);

    while (myNum[size] != '\0') {
        size++;
    }

    while(GameContinue)
    {
        printf("\nEnter your guess: ");
        scanf("%s", Guess);

        counter = 0;
        for (int i = 0; i < size; i++)
        {
            if (myNum[i] == Guess[i]) counter++;

        }
        if (counter >= size) GameContinue = 0;
        printf("The correct positions are: %d\n", counter);
    }

    // Game Over
    printf("Game Over\n");
    return 0;
}
