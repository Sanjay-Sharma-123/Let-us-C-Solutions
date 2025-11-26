// Write a program to generate all combinations of 1, 2 and 3 using for loop.

#include <stdio.h>
int main()
{
    int i,j,k, tot = 0;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            for(k = 1; k <= 3; k++)
            {
                printf("%d%d%d\n", i, j, k);
                tot++;
            }
        }
    }
    printf("Total combination are %d\n\n", tot);
    return (0);
}