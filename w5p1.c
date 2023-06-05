/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P1)
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

#include <stdio.h>
#define MIN_YEAR 2012
#define MAX_YEAR 2022

int main(void)
{
    int const JAN = 1, DEC = 12;
    int continueLoop = 1;
    int year, month;

    //Display header for log application
    printf("General Well-being Log\n");
    printf("======================\n");

    //Loop begins
    while (continueLoop == 1) {
        printf("Set the year and month for the well-being log (YYYY MM): ");
        scanf("%d %d", &year, &month);

        if (year < MIN_YEAR || year > MAX_YEAR) {
            printf("ERROR: The year must be between 2012 and 2022 inclusive\n");
        } if (month < JAN || month > DEC) {
            printf("ERROR: Jan.(1) - Dec.(12)\n");
            printf("\n");
        } else {
            printf(">*** Log date set! ***\n\n");
            printf("Log starting date: %d-%d-01\n", year, month);
            
            switch (month) {
            case 1:
                printf("JAN");
                break;
            
            default:
                break;
            }
            break;
        }
    } 


    
    return 0;
}