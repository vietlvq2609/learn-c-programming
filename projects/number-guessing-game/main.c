#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int input;

    srand(time(NULL));
    const int RANDOM_NUM = rand() % 101;

    for (;;)
    {
        printf("What is your guessing number (0-100)? ");
        if (scanf("%d", &input) != 1)
        {
            printf("Invalid input. Please enter an integer.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
            }

            continue;
        }

        if (input < 0 || input > 100)
        {
            printf("Please enter a number between 0 and 100.\n");
            continue;
        }

        if (input == RANDOM_NUM)
        {
            printf("Correct\n");
            break;
        }

        if (input > RANDOM_NUM) {
            printf("Too high!\n");
        } else {
            printf("Too low!\n");
        }
    }

    return 0;
}
