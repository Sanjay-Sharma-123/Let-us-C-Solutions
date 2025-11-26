/* If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid of not. The triangle is valid if the sum of two sides is greater than the largest of the three sides. */

#include <stdio.h>
int main()
{
    int a, b, c,d;

    printf("Enter value of a, b and c of a triangle:");
    scanf("%d%d%d", &a, &b, &c);
    /* if(a > b && a > c)
        d = a;
    else if(b > a && b > c)
            d = b;
    else
        d = c;
    
    printf("%d",d);
    if(a == b && a == c)
        printf("Triangle is valid.\n");
    else if(a + b > d && a + c > d && b + c > d)
        printf("Triangle is valid.\n");
    else 
        printf("Triangle is not valid.\n"); */
    if(a == b && a == c)
        printf("Triangle is valid.\n");
    else if(a > b && a > c)
    {
       if(b + c >= a)
            printf("Triangle is valid\n");
        else
            printf("Triangle is not valid\n");
    }
    else if(b > a && b > c)
    {
       if(a + c >= b)
            printf("Triangle is valid\n");
        else
            printf("Triangle is not valid\n");
    }
    else
    {
       if(a + b >= c)
            printf("Triangle is valid\n");
        else
            printf("Triangle is not valid\n");
    }

    return(0);
}