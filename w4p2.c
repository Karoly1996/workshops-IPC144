/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P2)
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

#include <stdio.h>

int main(void)
{
    //Declare Variables 
    int totalApples, totalOranges, totalPears, totalTomatoes, totalCabbages;
    int currentApples, currentOranges, currentPears, currentTomatoes, currentCabbages;

    printf("header");
    printf("header\n");

    while (1) {
        printf("How many apples?: ");
        scanf("%d", &totalApples);

        if (totalApples < 0) {
            printf("error\n");
        } else {
            break;
        }  
    }
    printf("\n");
     while (1) {
        printf("How many oranges?: ");
        scanf("%d", &totalOranges);

        if (totalOranges < 0) {
            printf("error\n");
        } else {
            break;
        }  
    }
     printf("\n");
     while (1) {
        printf("How many PEARS?: ");
        scanf("%d", &totalPears);

        if (totalPears < 0) {
            printf("error\n");
        } else {
            break;
        } 
    }
     printf("\n");
     while (1) {
        printf("How many tomatoes?: ");
        scanf("%d", &totalTomatoes);

        if (totalTomatoes < 0) {
            printf("error\n");
        } else {
            break;
        }  
    }
     printf("\n");
     while (1) {
        printf("How many CABBAGES?: ");
        scanf("%d", &totalCabbages);

        if (totalCabbages < 0) {
            printf("error\n");
        } else {
            break;
        }  
    }
    printf("\n");

    printf("--------------------------\n");
    printf("Time to pick the products!\n");
    printf("--------------------------\n\n");

    if (totalApples >= 1)
    while (1) {
        printf("Pick some APPLES... how many did you pick? : ");
        scanf("%d", &currentApples);

        if (currentApples > totalApples) {
            printf("You picked too many... only %d more APPLE(S) are needed.\n", totalApples);
        } if (currentApples <= 0) {
            printf("ERROR: You must pick at least 1!\n"); 
        } if (currentApples == totalApples - currentApples) {
            totalApples = totalApples - currentApples;
            printf("u need more\n");
        } else {
            printf("Great, that's the apples done!");
            break;
        }
    }




    return 0;
}