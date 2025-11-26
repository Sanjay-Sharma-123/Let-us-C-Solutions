/* Write a function to calculate the factorial value of any integer entered through the keyboard. */
#include <stdio.h>
int main()
{
    int fact(int);
    int num, fac;
    printf("Enter a number:");
    scanf("%d", &num);

    fac = fact(num);
    printf("The factorial of %d is %d.\n", num, fac);

    return (0);
}
int fact(int num)
{
    int i, fact = 1;

    for (i = num; i >= 1; i--)
        fact = fact * i;
    return (fact);
}