/* Any year is input through the keyboard. Write a program to derermine whether the year is leap year or not. */

#include <stdio.h>
int main()
{
    int leap_year;
    
    printf("Enter a year for check it is leap year or not : ");
    scanf("%d", &leap_year);

    if(leap_year % 4 == 0)
        printf("The given year is a leap year.\n");
    else
        printf("The ginven year is not a leap year.\n");

    return(0);
}