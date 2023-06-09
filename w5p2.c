/*/////////////////////////////////////////////////////////////////////////
Workshop - #5 (P2)
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
#define LOG_DAYS 3

int main(void)
{
    //Assigning my variables
    int const JAN = 1, DEC = 12;
    int continueLoop = 1;
    int year, month;
    double morningRate, eveningRate;
    double morningSum, eveningSum;
    int day;

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
            //split line to stay under 80 characters
            printf("   ERROR: The year must be between "
            "2012 and 2022 inclusive\n");
            //Checks to see if user inputs a month between 1 and 12
        } if (month < JAN || month > DEC) {
            //Print error message if its not between 1 and 12
            printf("   ERROR: Jan.(1) - Dec.(12)\n");
            //Checks to see if both year and months are valid inputs
        } else if ((year >= MIN_YEAR && year <= MAX_YEAR) &&
        //split lines to stay under 80 characters
         (month >= JAN && month <= DEC)) {
            printf("\n");
            printf("*** Log date set! ***\n\n");

            //For loop to display each logged days required throughout the month
            for (day = 1; day <= LOG_DAYS; day++) {
                //display each month with the year, 3 letters of the momnth and day
                switch (month) {
                case 1:
                    printf("%d-JAN-%02d\n", year, day);
                    break;
                case 2:
                    printf("%d-FEB-%02d\n", year, day);
                    break;
                case 3:
                    printf("%d-MAR-%02d\n", year, day);
                    break;  
                case 4:
                    printf("%d-APR-%02d\n", year, day);
                    break;
                case 5:
                    printf("%d-MAY-%02d\n", year, day);
                    break;
                case 6:
                    printf("%d-JUN-%02d\n", year, day);
                    break;
                case 7:
                    printf("%d-JUL-%02d\n", year, day);
                    break;
                case 8:
                    printf("%d-AUG-%02d\n", year, day);
                    break;
                case 9:
                    printf("%d-SEP-%02d\n", year, day);
                    break;
                case 10:
                    printf("%d-OCT-%02d\n", year, day);
                    break;
                case 11:
                    printf("%d-NOV-%02d\n", year, day);
                    break;
                case 12:
                    printf("%d-DEC-%02d\n", year, day);
                    break;
                }
                //Request morning rating from user
                do
                {
                    printf("   Morning rating (0.0-5.0): ");
                    scanf("%lf", &morningRate);
                    /*Check if user input is valid,
                    If not display error message on screen*/
                    if (morningRate < 0.0 || morningRate > 5.0){
                        printf("      ERROR: Rating must be between "
                        "0.0 and 5.0 inclusive!\n");
                    }
                    //If morning rating is valid got to next step
                } while (morningRate < 0.0 || morningRate > 5.0);
                //Request user input for evening rating
                do
                {
                    printf("   Evening rating (0.0-5.0): ");
                    scanf("%lf", &eveningRate);
                    //Check if user input is valid, if not print error
                    if (eveningRate < 0.0 || eveningRate > 5.0){
                        printf("      ERROR: Rating must be between "
                        "0.0 and 5.0 inclusive!\n");
                    }
                    //If true continue
                } while (eveningRate < 0.0 || eveningRate > 5.0);
                printf("\n");
                //Calulating the sum for both morning and evening rate
                morningSum += morningRate;
                eveningSum += eveningRate;
            }
            //Header for the summary
            printf("Summary\n");
            printf("=======\n");
            //display morning and evening sum to 0.3 decimal place
            printf("Morning total rating: %.3lf\n", morningSum);
            printf("Evening total rating:  %.3lf\n", eveningSum);
            printf("----------------------------\n");
            //display the overall rating by adding both morning and evening sum
            printf("Overall total rating: %.3lf\n\n", morningSum + eveningSum);
            //Calculate and display both morning and evening sum average rating
            printf("Average morning rating:  %.1lf\n", morningSum / LOG_DAYS);
            printf("Average evening rating:  %.1lf\n", eveningSum / LOG_DAYS);
            printf("----------------------------\n");
            //calculate morning and evening sum overall rating 
            //split line to keep it under 80 characters
            printf("Average overall rating:  %.1lf\n\n",
                (morningSum + eveningSum) / (LOG_DAYS * 2));
            //End the loop 
            continueLoop = 0;
         }
    }

    
    return 0;
}