#include <stdio.h>
#include <time.h>

int main()
{

    time_t t;
    int randomNum;
    float mealCost, 
          tip,
          tax,
          mealTax,
          mealTip,
          mealTotal;

    srand((unsigned) time(&t)); //initialize random varaible

    randomNum = rand() % 4;
    if (randomNum == 0)
    {
        mealCost = 9.95;
        printf("Your pizza cost is $%f, please input tax percentage (first) a space and tip percentage (second value) ", mealCost);
        scanf("%f %f", &tax, &tip);
        mealTax = mealCost * (tax/100);
        mealTip = mealCost * (tax/100);
        mealTotal = mealCost + mealTax + mealTip;
        printf("Tax on the meal is: %f; The Tip on your meal is: %f\n Total Price comes out to: %f", &mealTax, &mealTip, &mealTotal);
    }
    
    else if (randomNum == 1)
    {
        mealCost = 4.55;
        printf("Your pizza cost is $%f, please input tax percentage (first) a space and tip percentage (second value) ", mealCost);
        scanf("%f %f", &tax, &tip);
        mealTax = mealCost * (tax/100);
        mealTip = mealCost * (tax/100);
        mealTotal = mealCost + mealTax + mealTip;
        printf("Tax on the meal is: %f; The Tip on your meal is: %f\n Total Price comes out to: %f", &mealTax, &mealTip, &mealTotal);
    }
    // else if randomNUm = 2
        //mealCost = 13.25

    //else if randomNum = 3
        //mealCost = 13.25
    
    return 0;
}