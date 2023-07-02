/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #7 (P1)
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

//Macros
#define MIN_LIVES 1 
#define MAX_LIVES 10
#define MIN_PATH 10
#define MAX_PATH 70
#define MULTIPLE 5


#include <stdio.h>

//Struct's to define user defined data types
struct Playerinfo {
    int lives;
    char symbol;
    int treasure;
    int pastPositions[MAX_LIVES];
};
struct Gameinfo {
    int moves;
    int path;
    int bombs[MAX_PATH];
    int treasureLocation[MAX_PATH];
};



int main(void)
{
    //Declare player and game
    struct Playerinfo player;
    struct Gameinfo game;

    //start header
    printf("================================\n");
    printf("        Treasure Hunt!        \n");
    printf("================================\n\n");

    //Player configuration and request player symbol
    printf("PLAYER Configuration\n");
    printf("--------------------\n");
    printf("Enter a single character to represent the player: ");
    scanf(" %c", &player.symbol);

    //loop for player lives to be between 1-10
    do {
        printf("Set the number of lives: ");
        scanf("%d", &player.lives);

        //Print error message if invalid
        if (player.lives < 1 || player.lives > 10) {
            printf("     Must be between 1 and 10!\n");
        }
    } while (player.lives < MIN_LIVES || player.lives > MAX_LIVES);
    //display complete message
    printf("Player configuration set-up is complete\n\n");

    //start game config
    printf("GAME Configuration\n");
    printf("------------------\n");

    //request input for path lenght
    do {
        printf("Set the path length (a multiple of 5 between 10-70): ");
        scanf("%d", &game.path);
        //display error & Split line
        if (game.path % MULTIPLE != 0 
            || game.path < MIN_PATH || game.path > MAX_PATH) {
            printf("     Must be a multiple of 5 and between 10-70!!!\n");
        }
        //Split line 
    } while (game.path % MULTIPLE != 0 
            || game.path < MIN_PATH || game.path > MAX_PATH);

    //request input for moves
    do {
        printf("Set the limit for number of moves allowed: ");
        scanf("%d", &game.moves);

       if (game.moves < player.lives || game.moves > 0.75 * game.path) {
        //split line to stay under 80 characters
        printf("Value must be between %d and %d"
        "\n", player.lives, (int)(game.path * 0.75));
       }
    } while (game.moves < player.lives || game.moves > 0.75 * game.path);
    printf("\n");

    //Request input for bomb placement
    printf("BOMB Placement\n");
    printf("--------------\n");
    printf("Enter the bomb positions in sets of 5 where a value\n");
    printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
    printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.path);
    
    //start loop for bomb
    for (int i = 0; i < game.path; i += 5) {
        printf("Positions [%d-%d]: ", i + 1, i + 5);
        //get user input for bomb placement 
        scanf("%d %d %d %d %d", &game.bombs[i], &game.bombs[i + 1], 
        &game.bombs[i + 2], &game.bombs[i + 3], &game.bombs[i + 4]);
    } 
    printf("BOMB placement set\n\n");

    printf("TREASURE Placement\n");
    printf("------------------\n");
    
    



    return 0;
}