/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #8 (P2)
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


// System Libraries
#include <stdio.h>

// User Libraries
#include "w8p2.h"

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

// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg (divide by 2.20462)
double convertLbsKg(const double* pounds, double* conversionLbToKg) {
    double lbToKg = (*pounds) / LB_TO_KG;

    if (conversionLbToKg != NULL) {
        *conversionLbToKg = lbToKg;
    }
    return lbToKg;
}

// 9. convert lbs: g (call convertKG, then * 1000)
int convertLbsG(const double* pounds, int* conversionLbToG) {
    int lbToG = ((*pounds) / LB_TO_KG) * 1000;

    if (conversionLbToG != NULL) {
        *conversionLbToG = lbToG;
    }
    return lbToG;
}

// 10. convert lbs: kg and g
void convertLbs(const double* pounds, double* conversionKg, int* conversionG) {
    double lbToKg = (*pounds) / LB_TO_KG;
    int lbToG = ((*pounds) / LB_TO_KG) * 1000;

    if (conversionKg != NULL && conversionG != NULL) {
        *conversionKg = lbToKg;
        *conversionG = lbToG;
    }
}

// 11. calculate: servings based on gPerServ
double calculateServing(const int servingSizeGram, 
    const int totalGrams, double* numberOfServings) {

        double serving = ((double)totalGrams) / servingSizeGram;

        if (numberOfServings != NULL) {
            *numberOfServings = serving;
        }
        return serving;
    }

// 12. calculate: cost per serving
double calculateCostPerServing(const double* productPrice, 
    const double* totalServing, double* costPerServing) {

        double servingCost = (*productPrice) / (*totalServing);

        if (costPerServing != NULL) {
            *costPerServing = servingCost;
        }
        return servingCost;
    }

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* price, 
    const double* totalCal, double* cost) {

        double calCost = (*price) / (*totalCal);

        if(cost != NULL) {
            *cost = calCost;
        }
        return calCost;
    }

// 14.reporting detail record based on the cat food product data
struct ReportData calculateReportData(struct CatFoodInfo foodInfo) {
    struct ReportData data;

    // Assign data values to foodInfo for the first four members
    data.SKU = foodInfo.SKU;
    data.price = foodInfo.price;
    data.weightLb = foodInfo.weight;
    data.calories = foodInfo.calories;

    // Calculate additional members for data
    data.weightKg = convertLbsKg(&data.weightLb, &data.weightKg);
    data.weightG = convertLbsG(&data.weightLb, &data.weightG);
    data.serving = calculateServing(GRAMS, data.weightG, &data.serving);
    //calculate total calorioes 
    double totalCalories = data.calories * data.serving;
    //split lines to not exceed 80 characters
    data.costPerServing = calculateCostPerServing(&data.price, 
        &data.serving, &data.costPerServing);
    data.costPerCalorie = calculateCostPerCal(&data.price, 
        &totalCalories, &data.costPerCalorie);

    //return 
    return data;
}

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void)
{
	printf("Analysis Report (Note: Serving = %dg)\n", GRAMS);
	printf("---------------\n");
	printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n");
	printf("------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
}

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData data, 
    const int cheapestProduct) {
        //split lines to not exceed 80 characters
        printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf", 
        data.SKU, data.price, data.weightLb, data.weightKg, data.weightG, 
        data.calories, data.serving, data.costPerServing, data.costPerCalorie);
    }

// 17. Display the findings (cheapest)
void displayFinalAnalysis(struct CatFoodInfo foodInfo) {
    printf("Final Analysis\n");
	printf("--------------\n");
    //split line to not exceed 80 characters
    printf("Based on the comparison data, the PURRR-fect "
        "economical option is:\n");
    printf("SKU:%07d Price: $%5.2lf\n\n", foodInfo.SKU, foodInfo.price);
    printf("Happy shopping!\n\n");
    
}

// ----------------------------------------------------------------------------
// 7. Logic entry point
void start(void) {
    //
    struct CatFoodInfo foodInfo[MAX_PRODUCTS] = {{0}};
    struct ReportData data[MAX_PRODUCTS] = {{0}};

    openingMessage(MAX_PRODUCTS);

    //variable used in loop
    int i;
    int cheapest = 0; 
    //begin loop for product details array
    for (i = 0; i < MAX_PRODUCTS; i++) {
        foodInfo[i] = getProductDetails(i);
        data[i] = calculateReportData(foodInfo[i]);
    }
    
    //display cat food header
    displayCatFoodHeader();

    //split line to not go over 80 characters
    //begin loop for food information array
    for (i = 0; i < MAX_PRODUCTS; i++) {
        displayCatFoodData(foodInfo[i].SKU, &foodInfo[i].price, 
            foodInfo[i].calories, &foodInfo[i].weight);
    }

    //find cheapest CatFoodInfo cost per serving
    double cheapestPrice = data[0].costPerServing;
    for (i = 0; i < MAX_PRODUCTS; i++) {
        if (data[i].costPerServing <= cheapestPrice) {
            cheapestPrice = data[i].costPerServing;
            cheapest = i;
        }
    }
    printf("\n");

    //display report header
    displayReportHeader();

    //display report for data
    for (i = 0; i < MAX_PRODUCTS; i++) {
        displayReportData(data[i], cheapest);
        
        if (cheapest == i) {
            printf(" ***\n");
        } else {
            printf("\n");
        }
    }
    printf("\n");

    //display final analysis 
    for (i = 0; i < MAX_PRODUCTS; i++) {
        if (i == cheapest) {
            displayFinalAnalysis(foodInfo[i]);
        }
    }

}