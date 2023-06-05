/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P1)
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
#define MIN_YEAR 2012
#define MAX_YEAR 2022

int main(void)
{
    //Assigning my variables
    int const JAN = 1, DEC = 12;
    int continueLoop = 1;
    int year, month;

    //Display header for log application
    printf("General Well-being Log\n");
    printf("======================\n");

    //Start the loop
    while (continueLoop == 1) {
        //Ask for user input for year and month
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);

        //Checking to make sure year is equal to or between 2012 and 2022
        if (year < MIN_YEAR || year > MAX_YEAR) {
            //Print error if user inputs under 2012 or over 2022
            printf("ERROR: The year must be between 2012 and 2022 inclusive\n");
            //Checks to see if user inputs a month between 1 and 12
        } if (month < JAN || month > DEC) {
            //Print error message if its not between 1 and 12
            printf("ERROR: Jan.(1) - Dec.(12)\n");
            //Checks to see if both year and months are valid inputs
        } else if ((year >= MIN_YEAR && year <= MAX_YEAR) && (month >= JAN && month <= DEC)) { 
            printf("\n");
            printf(">*** Log date set! ***\n\n");
            
            
            //Using switch statements to check each case individually
            switch (month) {
                //Display the 3 letter month depending which month user input
            case 1:
                printf("Log starting date: %d-JAN-01\n", year);
                break;
            case 2:
                printf("Log starting date: %d-FEB-01\n", year);
                break;
            case 3:
                printf("Log starting date: %d-MAR-01\n", year);
                break;
            case 4:
                printf("Log starting date: %d-APR-01\n", year);
                break;
            case 5:
                printf("Log starting date: %d-MAY-01\n", year);
                break;
            case 6:
                printf("Log starting date: %d-JUN-01\n", year);
                break;
            case 7:
                printf("Log starting date: %d-JUL-01\n", year);
                break;
            case 8:
                printf("Log starting date: %d-AUG-01\n", year);
                break;
            case 9:
                printf("Log starting date: %d-SEP-01\n", year);
                break;
            case 10:
                printf("Log starting date: %d-OCT-01\n", year);
                break;
            case 11:
                printf("Log starting date: %d-NOV-01\n", year);
                break;
            case 12:
                printf("Log starting date: %d-DEC-01\n", year);
                break;
            }
            //End loop
            continueLoop = 0;
        }
    }


    
    return 0;
}