/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P1)
Full Name  : Karoly Nemeth
Student ID#: 021949144
Email      : knemeth@myseneca.ca
Section    : NDD

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;

    //Assigning variables for the products including ID, Price, and Taxed
    const int productId1 = 111, productId2 = 222, productId3 = 111; 
    const double priceP1 = 111.49, priceP2 = 222.99, priceP3 = 334.49;
    const char taxProduct1 = 'Y', taxProduct2 = 'N', taxProduct3 = 'N';
    //Assigning variable for the average price of the 3 prices
    const double averagePrice = (priceP1 + priceP2 + priceP3) / 3;

    //Print Header
    printf("Product Information\n");
    printf("===================\n");
    //Print Products to display value
    //Product 1
    printf("Product-1 (ID:%d)\n", productId1);
    printf("  Taxed: %c\n", taxProduct1);
    printf("  Price: $%.4lf\n\n", priceP1);
    //Product 2
    printf("Product-2 (ID:%d)\n", productId2);
    printf("  Taxed: %c\n", taxProduct2);
    printf("  Price: $%.4lf\n\n", priceP2);
    //Product 3
    printf("Product-3 (ID:%d)\n", productId3);
    printf("  Taxed: %c\n", taxProduct3);
    printf("  Price: $%.4lf\n\n", priceP3);

    //Print average of all prices 
    printf("The average of all prices is: $%.4lf\n\n", averagePrice);

    //Print Header for relational and logical Expression
    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n\n");

    //Display data analysis with values
    printf("Some Data Analysis...\n");
    printf("=====================\n");
    printf("1. Is product 1 taxable? -> %d\n\n", taxProduct1 == 'Y');
    //Split on new line to stay under 80characters per line
    printf("2. Are products 2 and 3 both NOT taxable (N)? "
        "-> %d\n\n", taxProduct2 && taxProduct3 != 'Y');
    //split line again so it doesnt go over 80characters
    printf("3. Is product 3 less than testValue ($330.99)? "
        "-> %d\n\n", priceP3 < testValue);
    //split line so it doesnt go over 80characters
    printf("4. Is the price of product 3 more than both product 1 and 2 combined?" 
        " -> %d\n\n", priceP3 > priceP1 && priceP2);
    //split line to stay below 80characters
    printf("5. Is the price of product 1 equal to or more than the price difference\n");
    printf("   of product 3 LESS product 2? "
        "->  %d (price difference: $%.2lf)\n\n", priceP1 >= priceP3 - priceP2, priceP3 - priceP2);
    //split line to stay below 80characters
    printf("6. Is the price of product 2 equal to or more than the average "
        "price? -> %d\n\n", priceP2 >= averagePrice);
    //split line to stay below 80characters
    printf("7. Based on product ID, product 1 is unique "
        "-> %d\n\n", productId1 != productId2 && productId1 != productId3);
    //split line to stay below 80characters
    printf("8. Based on product ID, product 2 is unique "
        "-> %d\n\n", productId2 != productId1 && productId2 != productId3);
    //split line to stay below 80characters
    printf("9. Based on product ID, product 3 is unique "
        "-> %d\n\n", productId3 != productId1 && productId3 != productId2);


    return 0;
}