/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P1)
Full Name  : 
Student ID#: 
Email      : 
Section    : 

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS
//define min-max for income, max items, and min cost
#define MIN_INCOME 500.00 
#define MAX_INCOME 400000.00
#define MAX_ITEMS 10
#define MIN_ITEMS 1
#define MIN_COST 100.00

#include <stdio.h>

int main(void)
{
    //variables
    double income, totalCost;
    int wishList;
    //Array variables
    int i;
    double cost[wishList];
    int priority[wishList];
    char finance[wishList];

    



    //header
    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n\n");

    //Loop to get user input until input is valid
    do {
        //request user income
        printf("Enter your monthly NET income: ");
        scanf("%lf", &income);

        //print error message if user income input is not valid
        if (income < MIN_INCOME) {
            printf("ERROR: You must have a consistent monthly income of at least $500.00\n\n");
        } if (income > MAX_INCOME) { //Display error if input is not valid
            printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n\n");
        }
        //stop loop once user income input is valid
    } while (income < MIN_INCOME || income > MAX_INCOME);
    printf("\n");

    //make a loop to request item list
    do {
        //request user input and save it
        printf("How many wish list items do you want to forecast?: ");
        scanf("%d", &wishList);
        //if user input is not valid print error
        if (wishList < MIN_ITEMS || wishList > MAX_ITEMS) {
            printf("ERROR: List is restricted to between 1 and 10 items.\n\n");
        }
        //stop loop if user input is valid
    } while (!(wishList >= MIN_ITEMS && wishList <= MAX_ITEMS));
    printf("\n");

    //start a loop to request user input for item cost, priority, and finance
    for (i = 0; i < wishList; i++) {
        //display item wish list item number
        printf("item-%d Details:\n", i + 1);

        //do cost loop
        do {
            printf("   Item cost: $");
            scanf("%lf", &cost[i]);
            if (cost[i] < MIN_COST) {
                printf("      ERROR: Cost must be at least $100.00\n");
            } 
        } while (cost[i] < MIN_COST);

        //do priority loop
        do {
            printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
            scanf("%d", &priority[i]);
            if (priority[i] < 1 || priority[i] > 3) {
                printf("      ERROR: Value must be between 1 and 3\n");
            }
        } while (priority[i] < 1 || priority[i] > 3);

        //do finance loop
        do
        {
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c", &finance[i]);
            if (finance[i] != 'y' && finance[i] != 'n') {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            }
        } while (finance[i] != 'y' && finance[i] != 'n');
        printf("\n");
    }

        printf("Item Priority Financed        Cost\n");
        printf("---- -------- -------- -----------\n");
        
        for (i = 0; i <= wishList; i++) {
            printf("  %d      %d        %c     %.2lf\n", i + 1, priority[i], finance[i], cost[i]);
            totalCost += cost[i];
        }
        //display total cost 
        printf("---- -------- -------- -----------\n");
        printf("                       $%11.2lf\n", totalCost);
        printf("\n");
        printf("Best of luck in all your future endeavours!\n\n");




    return 0;
}