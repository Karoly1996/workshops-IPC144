/*
/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
Full Name  : Karoly Nemeth
Student ID#: 021949144
Email      : knemeth@myseneca.ca
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
    const char patSize = 'S', sallySize = 'M', tomSize = 'L';

    //Declare variables being used
    double smallShirtPrice, mediumShirtPrice, largeShirtPrice;
    double avgSubTotal, avgTax;
    int numberOfShirtsPat, totalPat, subTotalPat, taxCalcPat, numberOfShirtsTom, totalTom, subTotalTom, taxCalcTom, numberOfShirtSally, totalSally, subTotalSally, taxCalcSally;
    int subTotalAdded, taxAdded, totalAdded;
    

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

    //print Patty's, Tommy's, and Sally's shirt size using the assigned variable
    //Ask user input how many shirts are being bought
    printf("Patty's shirt size is \'%c\'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &numberOfShirtsPat);
    printf("\n");
    
    printf("Tommy's shirt size is \'%c\'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &numberOfShirtsTom);
    printf("\n");

    printf("Sally's shirt size is \'%c\'\n", sallySize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &numberOfShirtSally);
    printf("\n");
    
    //calculate subTotal, taxCalc, Total for all 3 people
    //Patty
    subTotalPat = numberOfShirtsPat * 100 * smallShirtPrice; 
    taxCalcPat = round(subTotalPat * TAX);
    totalPat = subTotalPat + taxCalcPat;
    //Sally
    subTotalSally = numberOfShirtSally * 100 * mediumShirtPrice; 
    taxCalcSally = round(subTotalSally * TAX);
    totalSally = subTotalSally + taxCalcSally;
    //tommy
    subTotalTom = numberOfShirtsTom * 100 * largeShirtPrice; 
    taxCalcTom = round(subTotalTom * TAX);
    totalTom = subTotalTom + taxCalcTom;
    //calculate all 3 subTotal, taxCalc, total combined
    subTotalAdded = subTotalPat + subTotalSally + subTotalTom;
    taxAdded = taxCalcPat + taxCalcSally + taxCalcTom;
    totalAdded = totalPat + totalSally + totalTom;

    //Print chart to see all the information
    printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, smallShirtPrice, numberOfShirtsPat, (double) subTotalPat / 100, (double) taxCalcPat / 100, (double) totalPat / 100);
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", sallySize, mediumShirtPrice, numberOfShirtSally, (double) subTotalSally / 100, (double) taxCalcSally / 100, (double) totalSally / 100);
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, largeShirtPrice, numberOfShirtsTom, (double) subTotalTom / 100, (double) taxCalcTom / 100, (double) totalTom / 100);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n\n", (double) subTotalAdded / 100, (double) taxAdded / 100, (double) totalAdded / 100);

    //Coins Chart displayed and calculated without tax
    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", subTotalAdded / 100.0);
    printf("Toonies  %3d %9.4lf\n", subTotalAdded / 200, (subTotalAdded % 200) / 100.0);
    subTotalAdded %= 200;
    printf("Loonies  %3d %9.4lf\n", subTotalAdded / 100, (subTotalAdded % 100) / 100.0);
    subTotalAdded %= 100;
    printf("Quarters %3d %9.4lf\n", subTotalAdded / 25, (subTotalAdded % 25) / 100.0);
    subTotalAdded %= 25;
    printf("Dimes    %3d %9.4lf\n", subTotalAdded / 10, (subTotalAdded % 10) / 100.0);
    subTotalAdded %= 10;
    printf("Nickels  %3d %9.4lf\n", subTotalAdded / 5, (subTotalAdded % 5) / 100.0);
    subTotalAdded %= 5;
    printf("Pennies  %3d %9.4lf\n\n", subTotalAdded / 1, (subTotalAdded % 1) / 100.0);
    subTotalAdded %= 1;

    //Calculating average cost/shirt excluding tax
    avgSubTotal = subTotalPat + subTotalSally + subTotalTom;
    avgSubTotal = avgSubTotal / (numberOfShirtsPat + numberOfShirtSally + numberOfShirtsTom) / 100;
    printf("Average cost/shirt: $%.4lf\n\n", avgSubTotal);

    //Coins chart displayed with tax
    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", totalAdded / 100.0);
    printf("Toonies  %3d %9.4lf\n", totalAdded / 200, (totalAdded % 200) / 100.0);
    totalAdded %= 200;
    printf("Loonies  %3d %9.4lf\n", totalAdded / 100, (totalAdded % 100) / 100.0);
    totalAdded %= 100;
    printf("Quarters %3d %9.4lf\n", totalAdded / 25, (totalAdded % 25) / 100.0);
    totalAdded %= 25;
    printf("Dimes    %3d %9.4lf\n", totalAdded/ 10, (totalAdded % 10) / 100.0);
    totalAdded %= 10;
    printf("Nickels  %3d %9.4lf\n", totalAdded / 5, (totalAdded % 5) / 100.0);
    totalAdded %= 5;
    printf("Pennies  %3d %9.4lf\n\n", totalAdded / 1, (totalAdded % 1) / 100.0);
    totalAdded %= 1;

    //calculating cost/shirt with tax
    avgTax = totalPat + totalSally + totalTom;
    avgTax = avgTax / (numberOfShirtsPat + numberOfShirtSally + numberOfShirtsTom) / 100;
    printf("Average cost/shirt: $%.4lf\n", avgTax);

    return 0;
}