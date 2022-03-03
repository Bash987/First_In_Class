#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    int randomNum;
    int guess;
    int setMax = 10; 
    int entriesNum = 0;
    int menuInt;
    char *record[500];

    srand((unsigned) time(&t)); //initialize random varaible

    randomNum = (rand() % setMax) +1;

    printf(" Press 1 to play a game\nPress 2 to change the max number\nPress 3 to quit\n");
    scanf("%d", menuInt);


    if (menuInt == 1)
    {
        if (guess = 113)
        {
            printf("You have quit the game");
            printf(" Press 1 to play a game\nPress 2 to change the max number\nPress 3 to quit\n");
            scanf("%d", menuInt);
        }

        else if (guess = randomNum)
        {
            printf("You won!!! Congrats");
            record[entriesNum]= "true";
            entriesNum++;
            randomNum = (rand() % setMax) +1;
            }
        
        do 
            {
                printf("Guess the number: ");

                scanf("%d", &guess);

                if(guess > randomNum)
                {
                    printf("This guess is too high, try again.\n");
                    record[entriesNum] = "false";
                    entriesNum++;
                }

                else if(guess < randomNum)
                {
                    printf("This guess is too low, try again.\n");
                    record[entriesNum]= "false";
                    entriesNum++;

                }

            }
        while (guess != randomNum);
    }

    else if (menuInt == 2)
    {
        printf("Change the maximum numbers to guess");
        scanf("%d", &setMax);

        if (setMax < 0 && setMax > 11)
        {
            randomNum = (rand() % setMax) +1;
        }

        do
        {
            printf("Your input is either too large or too small, please enter a number in our range:\n");
            scanf("%d", &setMax);
        } while (setMax > 10 | setMax < 1 );
        
    }

    else if (menuInt == 3)
    {
        for (int point = 0; point < entriesNum; point++)
        { 
            int count = 0; 

            while(*(record[entriesNum]+count) != '\0') 
            { 
                printf("%c",*(record[entriesNum]+count++)); 
            } 
        printf("\n"); 
        }    
    }
    else
    {
        printf("invalid number type in again");
        scanf("%d", menuInt);
    }
    return 0;
}


  


