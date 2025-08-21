/*Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.*/
#include<stdio.h>
int main()
{
    int basic_s, allowance, house_rent, gross_s;
    printf("Enter Ramesh basic salary");
    scanf("%d",&basic_s);

    allowance=basic_s*40/100;
    house_rent=basic_s*20/100;
    gross_s=basic_s+allowance+house_rent;

    printf("Ramesh basic salary is %d\nDearness allowance is %d\nHouse rent is %d\nAnd gross salary is %d\n\n",basic_s, allowance, house_rent,gross_s);

    return(0);
}