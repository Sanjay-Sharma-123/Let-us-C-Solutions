/* Write a program to produce the following output:
        A B C D E F G F E D C B A 
        A B C D E F   F E D C B A 
        A B C D E       E D C B A 
        A B C D           D C B A 
        A B C               C B A 
        A B                   B A 
        A                       A */


#include <stdio.h>
int main()
{
    int i, j, k,s = 72, w, x = 1;

    for(i = 1; i <= 7; i++)
    {
        printf("\n");
        s--;
        for(j = 65; j <= 71; j++)
        {
            if(j > s)
                printf("  ");
            else
                printf("%c ", j);
        }
        if(i - 2 > 0)
        {
            w = 70 - x;
            x++;
        }
        for(k = 70; k >= 65; k--)
        {
            if(w < k)
                printf("  ");
            else
                printf("%c ", k);
        }
    }
    printf("\n\n");
    return(0);
}