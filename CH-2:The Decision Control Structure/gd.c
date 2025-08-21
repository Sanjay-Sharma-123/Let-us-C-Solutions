/* A library charges a fine for every book returned late. For first 5 days the fine is 50 paise, for 5-10 days fine is 1 rupees and above 10 days fine is 5 rupees. If you return the book after 30 days your membership will be cancelled. Write a program to accept the number of days the member is late to return the book and display the fine or the appropriate message. */

#include <stdio.h>
int main()
{
    int days;

    printf("Enter number of days are late to return the book : ");
    scanf("%d", &days);

    if(days <= 5)
        printf("You are %d days late and the fine is 50 paise.\n", days);
    else if(days <= 10)
        printf("You are %d days late and the fine is 1 rupee.\n", days);
    else if(days <= 30)
        printf("You are %d days late and the fine is 5 rupees.\n", days);
    else
        printf("You are %d days late and your membership will be cancelled.\n", days);
    
    return(0);
}