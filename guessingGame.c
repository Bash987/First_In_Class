#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu()
{
    int menuInt;
    printf(" Press 1 to play a game\nPress 2 to change the max number\nPress 3 to quit");
    scanf("%d", menuInt);

    return menuInt;
}

int main()
{
    time_t t;
    int randomNum;
    int guess;
    int setMax = 10; 
    int entriesNum = 0;
    char *record[500];



    srand((unsigned) time(&t)); //initialize random varaible

    randomNum = (rand() % setMax) +1;

    menu();

    if (menu() == 1)
    {
        if (guess = randomNum)
        {
            printf("You won!!! Congrats");
            randomNum = (rand() % setMax) +1;
            entriesNum++;
            menu();


            }
        
        do 
            {
                printf("Guess the number: ");

                scanf("%d", guess);

                if(guess > randomNum)
                {
                    printf("This guess is too high, try again.\n");
                    char result[] = "false";
                    record[entriesNum] = *result;
                    entriesNum++;
                }

                else if(guess < randomNum)
                {
                    printf("This guess is too low, try again.\n");
                    char result[] = "false";
                    record[entriesNum]= *result;
                    entriesNum++;

                }

            }
        while (guess != randomNum);
    }

    else if (menu() == 2)
    {
        printf("Change the maximum numbers to guess");
        scanf("%d", setMax);

        if (setMax < 0 && setMax > 11)
        {
            randomNum = (rand() % setMax) +1;
        }

        do
        {
            printf("Your input is either too large or too small, please enter a number in our range:\n");
            scanf("%d", setMax);
        } while (setMax > 10 | setMax < 1 );
        
    }
}


  


