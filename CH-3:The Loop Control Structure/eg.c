/* Write a program to produce the following output:
                            1 
                          2   3 
                        4   5   6
                      7   8   9   10  */

#include<stdio.h>
int main()
{
    int i, j, k, position = 50, c = 1, d = 0;

    for(i = 1; i <= 4; i++)
    {
        printf("\n");
        for(j = 1; j <= position; j++)
            printf(" ");
        position = position - 3;
        for(k = 1; k <= i+d; k++)
        {
            if(k % 2 != 0)
            {
                printf("%3d ", c);
                c++;
            }
            else
                printf("  ");
        }
        d++;
    }
    printf("\n\n");
    return(0);
}        