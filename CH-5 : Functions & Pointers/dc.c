/* Write a general-purpose function to convert any given year into its roman equivalent. The following table shows the roman equivalents of decimal numbers:
1 i, 5 v, 10 x, 50 l, 100 c, 500 d, 1000 m 
Example:
Roman equivalent of 1988 is mdcccclxxxviii 
Roman equivalent of 1525 is mdxxv */

#include<stdio.h>
int main()
{
    void roman(int);
    int num;
    
    printf("Enter a number:");
    scanf("%d", &num);

    roman(num);
    return(0);
}

void roman(int a)
{
    int num, mod = a, i;

    if(a / 1000 > 0)
    {
        num = a / 1000;
        mod = a % 1000;
        for(i = 1; i <= num; i++)
            printf("m");
    }
    if(mod / 500 > 0)
    {
        num = mod / 500;
        mod = mod % 500;
        for(i = 1; i <= num; i++)
            printf("d");
    }
    if(mod / 100 > 0)
    {
        num = mod / 100;
        mod = mod % 100;
        for(i = 1; i <= num; i++)
            printf("c");
    }
    if(mod / 50 > 0)
    {
        num = mod / 50;
        mod = mod % 50;
        for(i = 1; i <= num; i++)
            printf("l");
    }
    if(mod / 10 > 0)
    {
        num = mod / 10;
        mod = mod % 10;
        for(i = 1; i <= num; i++)
            printf("x");
    }
    if(mod / 5 > 0)
    {
        num = mod / 5;
        mod = mod % 5;
        for(i = 1; i <= num; i++)
            printf("v");
    }
    if(mod / 1 > 0)
    {
        num = mod / 1;
        for(i = 1; i <= num; i++)
            printf("i");
    }
    printf("\n\n");
}
