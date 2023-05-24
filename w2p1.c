/*
/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
Full Name  : Karoly Nemeth
Student ID#: 021949144
Email      : kenemth@myseneca.ca
Section    : NDD
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(void)
{
    //Declare constant variables that cannot be changed
    const double TAX = 0.13;
    const char patSize = 'S'; 

    //Declare variables being used
    double smallShirtPrice, mediumShirtPrice, largeShirtPrice;
    int numberOfShirts, total, subTotal, taxCalc;

    //Print 2 Line Header
    printf("Set Shirt Prices\n");
    printf("================\n");

    //Ask for shirt prices small, medium, and large
    //scan user input for each shirt size
    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &smallShirtPrice);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &mediumShirtPrice);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &largeShirtPrice);
    printf("\n");

    //Display user input of small, medium, and large shirt prices
    printf("Shirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $""%.2lf\n", smallShirtPrice);
    printf("MEDIUM : $""%.2lf\n", mediumShirtPrice);
    printf("LARGE  : $""%.2lf\n", largeShirtPrice);
    printf("\n");

    //print Patty's shirt size using the assigned variable
    //Ask user input how many shirts are being bought
    printf("Patty's shirt size is \'%c\'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &numberOfShirts);
    printf("\n");
    
    //Calculate the subTotal before taxes are applied
    //Calculate subTotal by multiplying with tax variable and round it
    //Add your subTotal and tax calculation
    subTotal = smallShirtPrice * 100 * numberOfShirts;
    taxCalc = round(subTotal * TAX); 
    total = subTotal + taxCalc;

    //Display scanned shirts in shopping cart
    //Display subTotal using 8.4lf as a double to show subTotal
    //Display taxes using 8.4lf as a double to show tax total
    //Display total using 8.4lf as a double to show total cost
    printf("Patty's shopping cart...\n");
    printf("Contains : %d shirts\n", numberOfShirts);
    printf("Sub-total: $%8.4lf\n", ((double) subTotal) / 100);
    printf("Taxes    : $%8.4lf\n", ((double) taxCalc) / 100);
    printf("Total    : $%8.4lf\n", ((double) total) / 100);

    return 0;
}