/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
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

int main(void) {
    //Declare my 3 variables
    int i, numberToIterate;
    char operation;
    
    //Header
    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n");

    //Loop until Q0 is entered
    while (1) {
        //Header requesting user input
        printf("\nD = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &operation, &numberToIterate);

        //If user enters Q0 exit program
        if (operation == 'Q' && numberToIterate == 0) {
            printf("\n+--------------------+");
            printf("\nLoop application ENDED");
            printf("\n+--------------------+\n");
            return 0;
        }

        //If Q is entered but the number is not 0 show error
        if (operation == 'Q') {
            printf("ERROR: To quit, the number of iterations should be 0!\n");
        } else {
            //Check to make sure valid user input is entered
            if (operation != 'D' && operation != 'W' && operation != 'F') {
                printf("ERROR: Invalid entered value(s)!\n");
            } else {
                //Check to see if the number is less than 3 or greater than 20 if so show error
                if (numberToIterate < 3 || numberToIterate > 20) {
                    printf("ERROR: The number of iterations must be between 3-20 inclusive!\n");
                } else {
                    //Set i to 0 every operation
                    i = 0;
                    //Execute a do while loop printing D as many times until user iterate is met
                    if (operation == 'D') {
                        printf("DO-WHILE: ");
                        do {
                            printf("D");
                            i++;
                        } while (i < numberToIterate);
                        printf("\n");
                        //Execute a while loop for W until users iterate is met
                    } else if (operation == 'W') {
                        printf("WHILE   : ");
                        while (i < numberToIterate) {
                            printf("W");
                            i++;
                        }
                        printf("\n");
                        //Execute a for loop while users iterate is met
                    } else if (operation == 'F') {
                        printf("FOR     : ");
                        for (i = 0; i < numberToIterate; i++) {
                            printf("F");
                        }
                        printf("\n");
                    }
                }
            }
        }
    }

    return 0;
}