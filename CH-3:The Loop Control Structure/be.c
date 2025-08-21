/* Write a program to print out all Armstrong numbers between 1 and 500. If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 *5)+(3*3*3) */ 

#include <stdio.h>
int main()
{
    int i, arm, a, d;
    printf(" Armstrong number are - \n");
    for(i = 1; i <= 500; i++)
    {
        arm = 0;
        a = i;
        while(a >= 1)
        {
            d = a % 10;
            arm = arm + (d * d * d);
            a = a / 10;
        }
        printf("%d = %d\n", i, arm);
    }
    return (0);
}