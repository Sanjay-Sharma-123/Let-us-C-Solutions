/* 
(c) Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another. */

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;

    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    // c = pow(a, b);
    // printf("%d of power %d is %d \n", a, b, c);

    // Second method 
    d = b;
    c = a;
     while(d > 1)
    {
        c = c * a;
        d--;
    }
    printf("%d of power %d is %d \n", a, b, c);
    return (0);
}