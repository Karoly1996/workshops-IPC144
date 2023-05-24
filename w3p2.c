/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
Full Name  : Karoly Nemeth
Student ID#: 021949144
Email      : nemeth@myseneca.ca
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
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;
    //Assigning variable for coffee Type, Weight, and Cream for product information 
    char typeCoffee1, typeCoffee2, typeCoffee3, suggestCream1, suggestCream2, suggestCream3;
    int weight1, weight2, weight3;
    //Assigning variable for coffee preferences
    char coffeeStrenght, coffeeCream;
    int dailyServing;

    //Display Header 
    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");
    printf("Enter the coffee product information being sold today.../\n\n");

    //Display coffee options 1 to 3 with user input
    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &typeCoffee1);
    printf("Bag weight (g): ");
    scanf(" %d", &weight1);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &suggestCream1);
    printf("\n");
    //Coffee 2 inputs
    printf("COFFEE-2...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &typeCoffee2);
    printf("Bag weight (g): ");
    scanf(" %d", &weight2);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &suggestCream2);
    printf("\n");
    //Coffee 3 inputs
    printf("COFFEE-3...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c", &typeCoffee3);
    printf("Bag weight (g): ");
    scanf(" %d", &weight3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &suggestCream3);
    printf("\n");

    //Create chart to display coffee products with user input
    printf("---+------------------------+---------------+-------+\n");
    printf("   |    Coffee              |  Packaged     | Best  |\n");
    printf("   |     Type               | Bag Weight    | Served|\n");
    printf("   +------------------------+---------------+ With  |\n");
    printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
    printf("---+------------------------+---------------+-------|\n");
    //Split code on new line to minimize long lines of code
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (typeCoffee1 == 'l' || typeCoffee1 == 'L'),
        (typeCoffee1 == 'm' || typeCoffee1 == 'M'), (typeCoffee1 == 'r' || typeCoffee1 == 'R'), weight1,
        (weight1 / GRAMS_IN_LBS), (suggestCream1 == 'y' || suggestCream1 == 'Y'));
    //split code on new line to minimize long lines of code
    printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n", (typeCoffee2 == 'l' || typeCoffee2 == 'L'),
        (typeCoffee2 == 'm' || typeCoffee2 == 'M'), (typeCoffee2 == 'r' || typeCoffee2 == 'R'), weight2,
        (weight2 / GRAMS_IN_LBS), (suggestCream2 == 'y' || suggestCream2 == 'Y'));
    //split code on new line to minimize logn lines of code
    printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n\n", (typeCoffee3 == 'l' || typeCoffee3 == 'L'),
        (typeCoffee3 == 'm' || typeCoffee3 == 'M'), (typeCoffee3 == 'r' || typeCoffee3 == 'R'), weight3,
        (weight3 / GRAMS_IN_LBS), (suggestCream3 == 'y' || suggestCream3 == 'Y'));

    // Print header
    printf("Enter how you like your coffee...\n\n");

    //Request user input for coffee preference
    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &coffeeStrenght);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffeeCream);
    printf("Typical number of daily servings: ");
    scanf(" %d", &dailyServing);
    printf("\n\n");

    printf("The below table shows how your preferences align to the available products:\n\n");

    //Display chart which shows what coffee product best suits user preference
    //I added SPLIT CODE LINES to the lines of code to make sure it is not long
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n",
        ((typeCoffee1 == 'l' || typeCoffee1 == 'L') && (coffeeStrenght == 'l' || coffeeStrenght == 'L')) ||
        ((typeCoffee1 == 'm' || typeCoffee1 == 'M') && (coffeeStrenght == 'm' || coffeeStrenght == 'M')) ||
        ((typeCoffee1 == 'r' || typeCoffee1 == 'R') && (coffeeStrenght == 'r' || coffeeStrenght == 'R')),
        ((dailyServing >= 1 && dailyServing <= 4) && (weight1 >= 0 && weight1 <= 250)) ||
        ((dailyServing > 4 && dailyServing <= 9) && (weight1 > 250 && weight1 <= 500)) ||
        (dailyServing >= 10 && (weight1 > 500 && weight1 <= 1000)),
        ((suggestCream1 == 'Y' || suggestCream1 == 'y') && (coffeeCream == 'Y' || coffeeCream == 'y')) ||
        ((suggestCream1 == 'N' || suggestCream1 == 'n') && (coffeeCream == 'N' || coffeeCream == 'n')));
    printf(" 2|       %d         |      %d      |   %d   |\n",
        ((typeCoffee2 == 'l' || typeCoffee2 == 'L') && (coffeeStrenght == 'l' || coffeeStrenght == 'L')) ||
        ((typeCoffee2 == 'm' || typeCoffee2 == 'M') && (coffeeStrenght == 'm' || coffeeStrenght == 'M')) ||
        ((typeCoffee2 == 'r' || typeCoffee2 == 'R') && (coffeeStrenght == 'r' || coffeeStrenght == 'R')),
        ((dailyServing >= 1 && dailyServing <= 4) && (weight2 >= 0 && weight2 <= 250)) ||
        ((dailyServing > 4 && dailyServing <= 9) && (weight2 > 250 && weight2 <= 500)) ||
        (dailyServing >= 10 && (weight2 > 500 && weight2 <= 1000)),
        ((suggestCream2 == 'Y' || suggestCream2 == 'y') && (coffeeCream == 'Y' || coffeeCream == 'y')) ||
        ((suggestCream2 == 'N' || suggestCream2 == 'n') && (coffeeCream == 'N' || coffeeCream == 'n')));
    printf(" 3|       %d         |      %d      |   %d   |\n\n",
        ((typeCoffee3 == 'l' || typeCoffee3 == 'L') && (coffeeStrenght == 'l' || coffeeStrenght == 'L')) ||
        ((typeCoffee3 == 'm' || typeCoffee3 == 'M') && (coffeeStrenght == 'm' || coffeeStrenght == 'M')) ||
        ((typeCoffee3 == 'r' || typeCoffee3 == 'R') && (coffeeStrenght == 'r' || coffeeStrenght == 'R')),
        ((dailyServing >= 1 && dailyServing <= 4) && (weight3 >= 0 && weight3 <= 250)) ||
        ((dailyServing > 4 && dailyServing <= 9) && (weight3 > 250 && weight3 <= 500)) ||
        (dailyServing >= 10 && (weight3 > 500 && weight3 <= 1000)),
        ((suggestCream3 == 'Y' || suggestCream3 == 'y') && (coffeeCream == 'Y' || coffeeCream == 'y')) ||
        ((suggestCream3 == 'N' || suggestCream3 == 'n') && (coffeeCream == 'N' || coffeeCream == 'n')));

    printf("Enter how you like your coffee...\n\n");

    //Request user input for preference of coffee
    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
    scanf(" %c", &coffeeStrenght);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &coffeeCream);
    printf("Typical number of daily servings: ");
    scanf(" %d", &dailyServing);
    printf("\n\n");

    printf("The below table shows how your preferences align to the available products:\n\n");
    
    //Display chart to best show which product best suits user preference #2
    //I added SPLIT CODE LINE to make sure lines of code are not long
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n",
        ((typeCoffee1 == 'l' || typeCoffee1 == 'L') && (coffeeStrenght == 'l' || coffeeStrenght == 'L')) ||
        ((typeCoffee1 == 'm' || typeCoffee1 == 'M') && (coffeeStrenght == 'm' || coffeeStrenght == 'M')) ||
        ((typeCoffee1 == 'r' || typeCoffee1 == 'R') && (coffeeStrenght == 'r' || coffeeStrenght == 'R')),
        ((dailyServing >= 1 && dailyServing <= 4) && (weight1 >= 0 && weight1 <= 250)) ||
        ((dailyServing > 4 && dailyServing <= 9) && (weight1 > 250 && weight1 <= 500)) ||
        (dailyServing >= 10 && (weight1 > 500 && weight1 <= 1000)),
        ((suggestCream1 == 'Y' || suggestCream1 == 'y') && (coffeeCream == 'Y' || coffeeCream == 'y')) ||
        ((suggestCream1 == 'N' || suggestCream1 == 'n') && (coffeeCream == 'N' || coffeeCream == 'n')));
    printf(" 2|       %d         |      %d      |   %d   |\n",
        ((typeCoffee2 == 'l' || typeCoffee2 == 'L') && (coffeeStrenght == 'l' || coffeeStrenght == 'L')) ||
        ((typeCoffee2 == 'm' || typeCoffee2 == 'M') && (coffeeStrenght == 'm' || coffeeStrenght == 'M')) ||
        ((typeCoffee2 == 'r' || typeCoffee2 == 'R') && (coffeeStrenght == 'r' || coffeeStrenght == 'R')),
        ((dailyServing >= 1 && dailyServing <= 4) && (weight2 >= 0 && weight2 <= 250)) ||
        ((dailyServing > 4 && dailyServing <= 9) && (weight2 > 250 && weight2 <= 500)) ||
        (dailyServing >= 10 && (weight2 > 500 && weight2 <= 1000)),
        ((suggestCream2 == 'Y' || suggestCream2 == 'y') && (coffeeCream == 'Y' || coffeeCream == 'y')) ||
        ((suggestCream2 == 'N' || suggestCream2 == 'n') && (coffeeCream == 'N' || coffeeCream == 'n')));
    printf(" 3|       %d         |      %d      |   %d   |\n\n",
        ((typeCoffee3 == 'l' || typeCoffee3 == 'L') && (coffeeStrenght == 'l' || coffeeStrenght == 'L')) ||
        ((typeCoffee3 == 'm' || typeCoffee3 == 'M') && (coffeeStrenght == 'm' || coffeeStrenght == 'M')) ||
        ((typeCoffee3 == 'r' || typeCoffee3 == 'R') && (coffeeStrenght == 'r' || coffeeStrenght == 'R')),
        ((dailyServing >= 1 && dailyServing <= 4) && (weight3 >= 0 && weight3 <= 250)) ||
        ((dailyServing > 4 && dailyServing <= 9) && (weight3 > 250 && weight3 <= 500)) ||
        (dailyServing >= 10 && (weight3 > 500 && weight3 <= 1000)),
        ((suggestCream3 == 'Y' || suggestCream3 == 'y') && (coffeeCream == 'Y' || coffeeCream == 'y')) ||
        ((suggestCream3 == 'N' || suggestCream3 == 'n') && (coffeeCream == 'N' || coffeeCream == 'n')));

    printf("Hope you found a product that suits your likes!\n");


 return 0;
}