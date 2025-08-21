/* Write a program for a matchstick game being played between the computer and a user. Your program should ensure that the computer always wins. Rules for the game are as follows:
− There are 21 matchsticks.
− The computer asks the player to pick 1, 2, 3, or 4
matchsticks.
− After the person picks, the computer does its
picking.
− Whoever is forced to pick up the last matchstick
loses the game. */

#include <stdio.h>
int main()
{
    int matchsticks = 21, user_choice, computer_choice;

    while(matchsticks >= 1)
    {
        printf("Pick up 1 to 4 : ");
        scanf("%d", &user_choice);

        if(user_choice > 4)
        {
            printf("You choice is invalid\n");
            break;
        }

        computer_choice = 5 - user_choice;
        printf("Your choice is %d\nComputer choice is %d\n", user_choice, computer_choice);

        matchsticks = matchsticks - user_choice - computer_choice;
        printf("Remaining matchsticks are %d\n", matchsticks);
    
        if(matchsticks == 1)
        {
            printf("You loses the game.\n");
            break;
        }
    }
    return(0);
}