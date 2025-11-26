/* If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cost_price, selling_price, profit_loss;

    printf("Enter cost price and selling price : ");
    scanf("%d%d", &cost_price, &selling_price);

    profit_loss = selling_price - cost_price;

    if(profit_loss > 0)
        printf("Seller has made profit and \nProfit is %d.\n",profit_loss);
    else if(profit_loss == 0)
        printf("Seller has made no profit and no loss.\n");
    else
    {
        profit_loss = abs(profit_loss);/*First method header file <stdlib.h> and abs()function.*/
        // profit_loss = profit_loss * -1; (Second method multiply minus value to -1)
        printf("Seller has made loss and \nLoss is %d\n",profit_loss);
    }

    return(0);
}