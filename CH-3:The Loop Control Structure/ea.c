/* Write a program to print all prime numbers from 1 to 300.
   (Hint: Use nested loops, break and continue) */

#include <stdio.h>
int main()
{
    int i, j, prime;

    for (i = 2; i <= 300; i++)
    {
        for (j = 2; j < i; j++)
        {
            prime = 0;
            if (i % j == 0)
            {
                break;
            }
            else
                 prime = 1;
        }
        if (prime == 1)
            printf("%d\n", i);
    }
    return (0);
}