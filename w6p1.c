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
//define min-max for income and max items
#define MIN_INCOME 500.00 
#define MAX_INCOME 400000.00
#define MAX_ITEMS 10
#define MIN_ITEMS 1

#include <stdio.h>

int main(void)
{
    //variables
    double income;
    int wishList, continueLoop = 1;

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
    } while (income <= MIN_INCOME || income >= MAX_INCOME);
    printf("\n");

    //make a loop to request item list
    do {
        //request user input and save it
        printf("How many wish list items do you want to forecast?: ");
        scanf("%d", &wishList);
        //if user input is not valid print error
        if (wishList < MIN_ITEMS || wishList > MAX_ITEMS) {
            printf("ERROR: List is restricted to between 1 and 10 items.\n");
        }
        //stop loop if user input is valid
    } while (!(wishList >= MIN_ITEMS && wishList <= MAX_ITEMS));
    printf("\n");

    








    return 0;
}