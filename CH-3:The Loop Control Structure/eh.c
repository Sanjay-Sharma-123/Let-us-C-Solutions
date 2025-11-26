/* Write a program to produce the following output: 1
                1
              1   1
            1   2   1 
          1   3   3   1
        1   4   6   4    1 */

#include <stdio.h>
int main()
{
    int c=1,space,i,j;

    for(i=0;i<5;i++)
    {
         printf("\n");
        for(space=1;space<=5-i;space++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            printf("% 4d",c);
        }
    }

    printf("\n\n");
    return(0);
}
                