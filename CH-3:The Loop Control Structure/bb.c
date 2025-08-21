/* Write a program to find the factorial value of any number entered through the keyboard. */

#include <stdio.h>
int main()
{
    int num, fact = 1;

    printf("Enter a number :");
    scanf("%d", &num);

    printf("You entered %d and factorial value is ", num);

    while(num >= 1)
    {
        fact = fact * num;
        num -- ;
    }

    printf("%d.\n\n", fact);

    return(0);
}