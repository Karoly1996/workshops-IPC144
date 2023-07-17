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

#define MAX_PRODUCTS 3
#define GRAMS 64
#define LB_TO_KG 2.20462

// ----------------------------------------------------------------------------
// structures

struct CatFoodInfo
{
    int     SKU;
    double  price;
    int     calories;
    double  weight;
};

struct ReportData 
{
    int     SKU;
    double  price;
    int     calories;
    double  weightLb;
    double  weightKg;
    int     weightG;
    double  serving;
    double  costPerServing;
    double  costPerCalorie;
};



// ----------------------------------------------------------------------------
// function prototypes

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int*);
/*
{
    int input;
    do {
        scanf("%d", &input);
        if(input <= 0) 
            printf("ERROR: Enter a positive value: ");
    } while (input <= 0);
    if (ptr != NULL) {
        *ptr = input;
    }
    return input; 
}
*/

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double*);

// 3. Opening Message (include the number of products that need entering)
void openingMessage(int);

// 4. Get user input for the details of cat food product
struct CatFoodInfo getProductDetails(int);

// 5. Display the formatted table header
void displayCatFoodHeader(void);

// 6. Display a formatted record of cat food data
void displayCatFoodData(int, double*, int, double*);

// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg
double convertLbsKg(const double* pounds, double* conversionLbToKg);

// 9. convert lbs: g
int convertLbsG(const double* pounds, int* conversionLbToG);

// 10. convert lbs: kg / g
void convertLbs(const double* pounds, double* conversionKg, int* conversionG);

// 11. calculate: servings based on gPerServ
//split line to not exceed 80 characters
double calculateServings(const int servingSizeGram, const int totalGrams, double* numberOfServings);

// 12. calculate: cost per serving
//split line to not exceed 80 characters
double calculateCostPerServing(const double* productPrice, 
    const double* totalServing, double* costPerServing);

// 13. calculate: cost per calorie
//split lines to not exceed 80 characters
double calculateCostPerCal(const double* price, 
    const double* totalCal, double* cost);

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(struct CatFoodInfo foodInfo);

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void);

// 16. Display the formatted data row in the analysis table
//split line to not exceed 80 characters
void displayReportData(const struct ReportData data, 
    const int cheapestProduct);

// 17. Display the findings (cheapest)
void displayFinalAnalysis(struct CatFoodInfo foodInfo);

// ----------------------------------------------------------------------------

// 7. Logic entry point
void start(void);