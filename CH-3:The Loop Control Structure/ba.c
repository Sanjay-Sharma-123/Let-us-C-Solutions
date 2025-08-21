/* Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour. */

#include <stdio.h>
int main()
{
    int i, hour;
    float rs;

    for(i = 1; i <= 10; i++)
    {
        printf("Enter your work hour employee number %d: ", i);
        scanf("%d", &hour);

        if(hour > 40)
        {
            rs = (hour - 40) * 12.00;
            printf("number employee %d\n and your over time is %d\n and your overtime Rs is %.2f\n\n\n", i, hour - 40, rs);
        }
        else
            printf("Employee number %d hasn't worked overtime.\n\n",i);
    }
    return (0);
}