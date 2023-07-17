/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P1)
Full Name  :Karoly Nemeth
Student ID#: 021949144
Email      : knemeth@myseneca.ca
Section    : NDD

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS


// System Libraries
#include <stdio.h>

// User Libraries
#include "w8p1.h"

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* int_ptr) {
int input;

    //start loop to scan for positive input
    do {
        scanf("%d", &input);
        //show error if value is not positive
        if(input <= 0) 
            printf("ERROR: Enter a positive value: ");
    } while (input <= 0);
    //assign value to pointer if its not 0
    if (int_ptr != NULL) {
        *int_ptr = input;
    }
    //return input to function
    return input;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* double_ptr) {
    double input;

    //start loop
    do {
        scanf("%lf", &input);
        if(input <= 0) 
        //show error if input is not positive
            printf("ERROR: Enter a positive value: ");
    } while (input <= 0);
    //assign value to pointer if its not 0
    if (double_ptr != NULL) {
        *double_ptr = input;
    }
    //return input
    return input;
}

// 3. Opening Message (include the number of products that need entering)
void openingMessage(int sequence) {
    
    //display food analysis
    printf("Cat Food Cost Analysis\n");
    printf("======================\n\n");

    //split line so it doesnt exceed 80 characters
    //get max product and grams and display
    printf("Enter the details for %d dry food bags "
        "of product data for analysis.\n", MAX_PRODUCTS);
    printf("NOTE: A 'serving' is %dg\n\n", GRAMS);

}

// 4. Get user input for the details of cat food product
struct CatFoodInfo getProductDetails(const int sequence) {
    struct CatFoodInfo foodInfo;
    //add 1 for each sequence and scan user input for products
    printf("Cat Food Product #%d\n", sequence + 1);
    printf("--------------------\n");

    //Scan SKU, price, calories and weight for struct
    //print errors if value is not positive
    //SKU 
    printf("SKU           : ");
    do {
        scanf("%d", &foodInfo.SKU);
        if (foodInfo.SKU <= 0) {
            printf("ERROR: Enter a positive value: ");
        }

    } while(foodInfo.SKU <= 0);    

    //price
    printf("PRICE         : $");
    do {
        scanf("%lf", &foodInfo.price);
        if (foodInfo.price <= 0) {
            printf("ERROR: Enter a positive value: ");
        }

    } while(foodInfo.price <= 0);

     //weight
    printf("WEIGHT (LBS)  : ");
    do {
        scanf("%lf", &foodInfo.weight);
        if (foodInfo.weight <= 0) {
            printf("ERROR: Enter a positive value: ");
        }

    } while(foodInfo.weight <= 0);

    //calories
    printf("CALORIES/SERV.: ");
    do {
        scanf("%d", &foodInfo.calories);
        if (foodInfo.calories <= 0) {
            printf("ERROR: Enter a positive value: ");
        }

    } while(foodInfo.calories <= 0);
    printf("\n");
    //return to function
    return foodInfo;
    
}



// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
	printf("SKU         $Price    Bag-lbs Cal/Serv\n");
	printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(int SKU, double* price, int calories, double* weight) {
	printf("%07d %10.2lf %10.1lf %8d\n", SKU, *price, *weight, calories);
}

// 7. Logic entry point
void start(void) {
    //
    struct CatFoodInfo foodInfo[MAX_PRODUCTS] = {{0}};

    openingMessage(MAX_PRODUCTS);

    //variable used in loop
    int i;
    //begin loop for product details array
    for (i = 0; i < MAX_PRODUCTS; i++) {
        foodInfo[i] = getProductDetails(i);
    }
    
    //display cat food header
    displayCatFoodHeader();

    //split line to not go over 80 characters
    //begin loop for food information array
    for (i = 0; i < MAX_PRODUCTS; i++) {
        displayCatFoodData(foodInfo[i].SKU, &foodInfo[i].price, 
            foodInfo[i].calories, &foodInfo[i].weight);
    }

}