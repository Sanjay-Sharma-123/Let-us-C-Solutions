/* If the total selling price of 15 items and the total profit earned on them is input through the keyboard. Write a program to find the cost price of one item. */

#include<stdio.h>
int main()
{ 
    int selling_price, profit, one_item_price;

    printf("Enter the selling price of 15 items:");
    scanf("%d",&selling_price);

    printf("Enter the profit of 15 items:");
    scanf("%d",&profit);

    one_item_price = (selling_price - profit)/15; // For the amount of an item

    printf("One item price is %d.\n", one_item_price);

    return(0);
}