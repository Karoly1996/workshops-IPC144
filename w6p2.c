/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P1)
Full Name  : Karoly Nemeth
Student ID#: 021949144
Email      : knemeth@myseneca.ca
Section    : NDD

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
#include <math.h>

int main(void)
{
    //variables
    double income, totalCost;
    int wishList;
    
    //header
    printf("+--------------------------+\n");
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n\n");

    //Loop to get user input until input is valid
    do {
        //request user income
        printf("Enter your monthly NET income: $");
        scanf("%lf", &income);

        //print error message if user income input is not valid
        if (income < MIN_INCOME) {
            //split line to not go over 80 characters
            printf("ERROR: You must have a consistent monthly "
                "income of at least $500.00\n\n");
        } if (income > MAX_INCOME) { //Display error if input is not valid
            //split line to not go over 80 characters
            printf("ERROR: Liar! I'll believe you if you "
                "enter a value no more than $400000.00\n\n");
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

    //Array variables
    int i;
    double cost[wishList];
    int priority[wishList];
    char finance[wishList];
    int financeNote = 0;

    //start a loop to request user input for item cost, priority, and finance
    for (i = 1; i <= wishList; i++) {
        //display item wish list item number
        printf("Item-%d Details:\n", i);

        //do cost loop
        do {
            //request and scan user input
            printf("   Item cost: $");
            scanf("%lf", &cost[i]);
            //print error if user input is invalid
            if (cost[i] < MIN_COST) {
                printf("      ERROR: Cost must be at least $100.00\n");
            } 
        } while (cost[i] < MIN_COST);

        //do priority loop
        do {
            //request and scan user input 
            printf("   How important is it to you? "
                "[1=must have, 2=important, 3=want]: ");
            scanf("%d", &priority[i]);
            //print error if user input is not valid
            if (priority[i] < 1 || priority[i] > 3) {
                printf("      ERROR: Value must be between 1 and 3\n");
            }
        } while (priority[i] < 1 || priority[i] > 3);

        //do finance loop
        do
        {
            //request and scan user input
            printf("   Does this item have financing options? [y/n]: ");
            scanf(" %c", &finance[i]);
            //print error message if user input is not valid
            if (finance[i] != 'y' && finance[i] != 'n') {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            } if (finance[i] == 'y') {
                financeNote = 1;
            }
        } while (finance[i] != 'y' && finance[i] != 'n');
        printf("\n");
    }

        //header for chart
        printf("Item Priority Financed        Cost\n");
        printf("---- -------- -------- -----------\n");
        
        //print each item with the according priority, finance, and cost
        for (i = 1; i <= wishList; i++) {
            printf("  %d      %d        %c    %11.2lf\n", 
            i, priority[i], finance[i], cost[i]);
            //calculate total cost of all items
            totalCost += cost[i];
        }
        //display total cost 
        printf("---- -------- -------- -----------\n");
        printf("                      $%11.2lf\n", totalCost);
        printf("\n");
        

    //variables for select, year, month
    int select, year, month;
    int loop = 1;

    //start loop for getting user input for selection
    while (loop == 1) {
        printf("How do you want to forecast your wish list?\n");
        printf(" 1. All items (no filter)\n");
        printf(" 2. By priority\n");
        printf(" 0. Quit/Exit\n");
        printf("Selection: ");
        scanf("%d", &select);
        printf("\n");
        
        if (select < 0 || select > 2) {
            printf("ERROR: Invalid menu selection.\n\n");
        } else if (select == 0) {
            loop = 0;
        }

        //display selection 1 
        if (select == 1) {
            printf("====================================================\n");
            printf("Filter:   All items\n");
            printf("Amount:   $%1.2lf\n", totalCost);
            //calculations for years and months
            year = floor((int)totalCost / (income * 12));
            month = ceil((int)(totalCost / income) % 12);
            printf("Forecast: %d years, %d months\n", year, month);
            //display finance note if 'y' is true
            if (financeNote == 1) {
                printf("NOTE: Financing options are available on some items.\n"
                    "      You can likely reduce the estimated months.\n");
            }
            printf("====================================================\n\n");
        }

        //display selection 2
        if (select == 2) {
            
        }




    } 


    return 0;
}