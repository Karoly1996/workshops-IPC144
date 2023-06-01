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
    int continueShopping = 1;

    printf("header\n");
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

    //apples
    while (totalApples > 0) {
        printf("Pick some APPLES... how many did you pick? : ");
        scanf("%d", &currentApples);

        if (currentApples < 1) {
            printf("ERROR: You must pick at least 1!\n");
            continue;
        } if (currentApples > totalApples) {
            printf("You picked too many... only %d more APPLE(S) are needed.\n", totalApples);
            continue;
        } 
        totalApples -= currentApples;
        if (totalApples > 0) {
            printf("Looks like we still need some APPLES...\n");
        } else {
            printf("Great, that's the apples done!\n\n");
        }
    }
    //oranges
    while (totalOranges > 0) {
        printf("Pick some ORANGES... how many did you pick? : ");
        scanf("%d", &currentOranges);

        if (currentOranges < 1) {
            printf("ERROR: You must pick at least 1!\n");
            continue;
        } if (currentOranges > totalOranges) {
            printf("You picked too many... only %d more ORANGE(S) are needed.\n", totalOranges);
            continue;
        } 
        totalOranges -= currentOranges;
        if (totalOranges > 0) {
            printf("Looks like we still need some ORANGE...\n");
        } else {
            printf("Great, that's the oranges done!\n\n");
        }
    }
    //pears
    while (totalPears > 0) {
        printf("Pick some PEARS.. how many did you pick? : ");
        scanf("%d", &currentPears);

        if (currentPears < 1) {
            printf("ERROR: You must pick at least 1!\n");
            continue;
        } if (currentPears > totalPears) {
            printf("You picked too many... only %d more PEAR(S) are needed.\n", totalPears);
            continue;
        } 
        totalPears -= currentPears;
        if (totalPears > 0) {
            printf("Looks like we still need some PEARS...\n");
        } else {
            printf("Great, that's the pears done!\n\n");
        }
    }
    //tomatoes
    while (totalTomatoes > 0) {
        printf("Pick some TOMATOES... how many did you pick? : ");
        scanf("%d", &currentTomatoes);

        if (currentTomatoes < 1) {
            printf("ERROR: You must pick at least 1!\n");
            continue;
        } if (currentTomatoes > totalTomatoes) {
            printf("You picked too many... only %d more TOMATOE(S) are needed.\n", totalTomatoes);
            continue;
        } 
        totalTomatoes -= currentTomatoes;
        if (totalTomatoes > 0) {
            printf("Looks like we still need some TOMATOES...\n");
        } else {
            printf("Great, that's the tomatoes done!\n\n");
        }
    }
    //cabbages
    while (totalCabbages > 0) {
        printf("Pick some CABBAGES... how many did you pick? : ");
        scanf("%d", &currentCabbages);

        if (currentCabbages < 1) {
            printf("ERROR: You must pick at least 1!\n");
            continue;
        } if (currentCabbages > totalCabbages) {
            printf("You picked too many... only %d more CABBAGE(S) are needed.\n", totalCabbages);
            continue;
        } 
        totalCabbages -= currentCabbages;
        if (totalCabbages > 0) {
            printf("Looks like we still need some CABBAGE...\n");
        } else {
            printf("Great, that's the cabbages done!\n\n");
        }
    }


    return 0;
}