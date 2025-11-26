/* The policy followed by a company to process customer orders is given by the following 
   rules:
(a) If a customer order is less than or equal to that in stock and has credit is OK, 
    supply has requirement.
(b) If has credit is not OK do not supply. Send him intimation.
(c) If has credit is Ok but the item in stock is less than has order, supply what is in
    stock. Intimate to him data the balance will be shipped.
    Write a C program to implement the company policy. */

#include <stdio.h>
int main()
{
    int order;
    char credit;

    printf("Enter your order and if credit ok then press y otherwise press n :\n");
    scanf("%d %c", &order, &credit);

    if((credit == 'y' || credit == 'Y') && order <= 5000)
        printf("Ready for supply.\n");
    else if(credit != 'y')
        printf("We does not supply.\n");
    else if(credit == 'y' && order > 5000)
        printf("Your order is %d.\nNow we are ready to supply 5000\nSo remaining balace is %d will be shiped after some time.\n", order, order - 5000);
    else 
        printf("Your entered wrong data.\n");
    
    return(0);
}