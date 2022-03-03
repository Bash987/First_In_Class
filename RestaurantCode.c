#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    time_t t; //get time to make it a seed
    int randomNum; //is made into a random number 0-3 
    float mealCost, //cost of just the meal itself
          tip, //tip percentage
          tax, //tax  percentage
          mealTax, //stores (tax percentage/ 100) * mealCost
          mealTip, // stores (tip percentage / 100) * mealcost
          mealTotal; //stores sum of mealTax, mealTotal, and mealCost

    srand((unsigned) time(&t)); //initialize random varaible

    randomNum = rand() % 4; //randomNum given a psuedo random value
    if (randomNum == 0)
    {
        mealCost = 9.95; //meal cost equal salad cost
        printf("Your salad cost is $%.2f, please input tax percentage (first) a space and tip percentage (second value) ", mealCost);
        //line above prints out salad cost and prompts for 2 float values 
        scanf("%f %f", &tax, &tip); //takes in value from command prompt and stores them in repective float declaration
        mealTax = mealCost * (tax/100); //does calculation for meal tax
        mealTip = mealCost * (tip/100); // does calculation for meal tip
        mealTotal = mealCost + mealTax + mealTip; //adds them together
        printf("Tax on the salad is: %.2f\nThe Tip on your salad is: %.2f\nTotal Price comes out to: %.2f", mealTax, mealTip, mealTotal);
        //line above prints out the meal tax, meal tip and total price
    }
    
    else if (randomNum == 1)
    {
        mealCost = 4.55; //meal cost equal salad cost
        printf("Your soup cost is $%.2f, please input tax percentage (first) a space and tip percentage (second value) ", mealCost);
        //line above prints out salad cost and prompts for 2 float values 
        scanf("%f %f", &tax, &tip); //takes in value from command prompt and stores them in repective float declaration
        mealTax = mealCost * (tax/100); //does calculation for meal tax
        mealTip = mealCost * (tip/100); // does calculation for meal tip
        mealTotal = mealCost + mealTax + mealTip; //adds them together
        printf("Tax on the soup is: %.2f\nThe Tip on your soup is: %.2f\nTotal Price comes out to: %.2f", mealTax, mealTip, mealTotal);
        //line above prints out the meal tax, meal tip and total price
    }
    
    else if (randomNum == 2)
    {
        mealCost = 13.25; //meal cost equal salad cost
        printf("Your sandwich cost is $%.2f, please input tax percentage (first) a space and tip percentage (second value) ", mealCost);
        //line above prints out salad cost and prompts for 2 float values 
        scanf("%f %f", &tax, &tip); //takes in value from command prompt and stores them in repective float declaration
        mealTax = mealCost * (tax/100); //does calculation for meal tax
        mealTip = mealCost * (tip/100); // does calculation for meal tip
        mealTotal = mealCost + mealTax + mealTip; //adds them together
        printf("Tax on the sandwich is: %.2f\nThe Tip on your sandwich is: %.2f\nTotal Price comes out to: %.2f", mealTax, mealTip, mealTotal);
        //line above prints out the meal tax, meal tip and total price
    }
    
    else if (randomNum == 3)
    {
        mealCost = 22.35; //meal cost equal salad cost
        printf("Your pizza cost is $%.2f, please input tax percentage (first) a space and tip percentage (second value) ", mealCost);
        //line above prints out salad cost and prompts for 2 float values 
        scanf("%f %f", &tax, &tip); //takes in value from command prompt and stores them in repective float declaration
        mealTax = mealCost * (tax/100); //does calculation for meal tax
        mealTip = mealCost * (tip/100); // does calculation for meal tip
        mealTotal = mealCost + mealTax + mealTip; //adds them together
        printf("Tax on the pizza is: %.2f\nThe Tip on your pizza is: %.2f\nTotal Price comes out to: %.2f", mealTax, mealTip, mealTotal);
        //line above prints out the meal tax, meal tip and total price
    }

    return 0; //return 0 since main wants a value returned

}