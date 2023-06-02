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

    //Start the loop 
    while (continueShopping == 1) {
        //Display header
        printf("Grocery Shopping\n");
        printf("================\n");

        //Start a loop asking for user apples until value entered is 0 or more
        while (1) {
            printf("How many apples?: ");
            scanf("%d", &totalApples);
            //display an error if value is not 0 or more
            if (totalApples < 0) {
                printf("ERROR: Value must be 0 or more.\n");
            } else {
                //Stop loop if user input 0 or greater
                break;
            }  
        }
        printf("\n");
        //start loop for oranges asking user for a value that is 0 or greater
        while (1) {
            printf("How many oranges?: ");
            scanf("%d", &totalOranges);
            //check if oranges is greater or equal to 0 if not print error
            if (totalOranges < 0) {
                printf("ERROR: Value must be 0 or more.\n");
            } else {
                //stop loop if there is no error
                break;
            }  
        }
        printf("\n");
        //start loop for pears asking users input
        while (1) {
            printf("How many PEARS?: ");
            scanf("%d", &totalPears);
            //check to see if users input is 0 or greater if not print error
            if (totalPears < 0) {
                printf("ERROR: Value must be 0 or more.\n");
            } else {
                //stop loop if user input doesnt have an error
                break;
            } 
        }
        printf("\n");
        //start loop for tomatoes
        while (1) {
            printf("How many tomatoes?: ");
            scanf("%d", &totalTomatoes);
            //check if tomatoes is greater than or equal to 0 if not print error 
            if (totalTomatoes < 0) {
                printf("ERROR: Value must be 0 or more.\n");
            } else {
                //end loop if user input didnt display error
                break;
            }  
        }
        printf("\n");
        //start loop for cabbages and scan user input
        while (1) {
            printf("How many CABBAGES?: ");
            scanf("%d", &totalCabbages);
            //check to see if cabbages is greater than or equal to 0 if not print error
            if (totalCabbages < 0) {
                printf("ERROR: Value must be 0 or more.\n");
            } else {
                //end loop if user input doesnt show error
                break;
            }  
        }
        printf("\n");

        //print header for picking products
        printf("--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n\n");

        //if total apples is greater than 0 start loop for apples
        while (totalApples > 0) {
            //checking to see how many apples user picked
            printf("Pick some APPLES... how many did you pick? : ");
            scanf("%d", &currentApples);
            //if user picked less than 1 apple display error message
            if (currentApples < 1) {
                printf("ERROR: You must pick at least 1!\n");
                continue;
                //if user picked more apples than needed display error message
            } if (currentApples > totalApples) {
                printf("You picked too many... only %d more APPLE(S) are needed.\n", totalApples);
                continue;
            } 
            //Make total apples = to apples needed - picked apples
            totalApples -= currentApples;
            //check to see if total apples is 0 if not print error asking for more apples
            if (totalApples > 0) {
                printf("Looks like we still need some APPLES...\n");
                //If no error messages show and apples needed is 0 print great apple is done message
            } else {
                printf("Great, that's the apples done!\n\n");
            }
        }
        //Start a loop if oranges is greater than 0 
        while (totalOranges > 0) {
            //ask user input how many oranges are picked
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d", &currentOranges);
            
            //if user input is less than 1 print error message
            if (currentOranges < 1) {
                printf("ERROR: You must pick at least 1!\n");
                continue;
                //if oranges picked is greater than oranges needed show error
            } if (currentOranges > totalOranges) {
                printf("You picked too many... only %d more ORANGE(S) are needed.\n", totalOranges);
                continue;
            } 
            //makes total oranges = total oranges - currentoranges 
            totalOranges -= currentOranges;
            //checks to see if oranges needed is 0
            if (totalOranges > 0) {
                printf("Looks like we still need some ORANGE...\n");
                //if oranges needed is 0 print done message
            } else {
                printf("Great, that's the oranges done!\n\n");
            }
        }
        ////Start a loop if pears is greater than 0
        while (totalPears > 0) {
            //ask user how many is picked
            printf("Pick some PEARS.. how many did you pick? : ");
            scanf("%d", &currentPears);
            
            //check to see if atleast 1 was picked if not print error message
            if (currentPears < 1) {
                printf("ERROR: You must pick at least 1!\n");
                continue;
                //if more pears are picked than needed show error message
            } if (currentPears > totalPears) {
                printf("You picked too many... only %d more PEAR(S) are needed.\n", totalPears);
                continue;
            } 
            //total pears = pears needed - pears picked
            totalPears -= currentPears;
            //if pears needed doesnt equal to 0 display error
            if (totalPears > 0) {
                printf("Looks like we still need some PEARS...\n");
                //if pears needed is 0 print done message
            } else {
                printf("Great, that's the pears done!\n\n");
            }
        }
        //Check to see if tomatoes needed is greater than 0 if so start loop
        while (totalTomatoes > 0) {
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf("%d", &currentTomatoes);

            //If picked tomatoes is less than 1 display an error
            if (currentTomatoes < 1) {
                printf("ERROR: You must pick at least 1!\n");
                continue;
                //if picked tomatoes is more than needed tomatoes print an error
            } if (currentTomatoes > totalTomatoes) {
                printf("You picked too many... only %d more TOMATOE(S) are needed.\n", totalTomatoes);
                continue;
            } 
            //tomatoes needed = tomatoes need - picked tomatoes
            totalTomatoes -= currentTomatoes;
            //if tomatoes needed is not 0 show message to continue picking tomatoes
            if (totalTomatoes > 0) {
                printf("Looks like we still need some TOMATOES...\n");
                //if tomatoes needed is 0 display message that theyre done
            } else {
                printf("Great, that's the tomatoes done!\n\n");
            }
        }
        //start loop for cabbages if cabbages is greater than 0 
        while (totalCabbages > 0) {
            //ask user how many cabbages is picked
            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf("%d", &currentCabbages);

            //check to see if user picked atleast 1 cabbage if not print error message
            if (currentCabbages < 1) {
                printf("ERROR: You must pick at least 1!\n");
                continue;
                //check to see if user picked more cabbages than needed cabbages if so print error message
            } if (currentCabbages > totalCabbages) {
                printf("You picked too many... only %d more CABBAGE(S) are needed.\n", totalCabbages);
                continue;
            } 
            //total cabbages = cabbages needed - picked cabbages 
            totalCabbages -= currentCabbages;
            //check to see if total cabbages is 0 if not print error message
            if (totalCabbages > 0) {
                printf("Looks like we still need some CABBAGE...\n");
                //if cabbages is 0 print done cabbages
            } else {
                printf("Great, that's the cabbages done!\n\n");
            }
        }
        //header for asking user if they want to continue
        printf("All the items are picked!\n\n");
        printf("Do another shopping? (0=NO): ");
        //check to see user input if they would like to continue shopping or not
        scanf("%d", &continueShopping);
        //if user inputs 0 they want to end shopping 
        if (continueShopping == 0) {
            printf("\nYour tasks are done for today - enjoy your free time!\n\n");
        }
    }


    return 0;
}