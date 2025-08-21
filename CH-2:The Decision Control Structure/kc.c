/* Write a program to find the greatest of the three numbers entered through the keyboard using conditional operators. */

#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter three numbers:");
    scanf("%d%d%d",&a, &b, &c);

    (a == b && a == c ? printf("Numbers are equal.\n"): (a > b && a > c ? printf("%d is highest number.\n", a):(b > a && b > c ? printf("%d is highest number.\n", b): printf("%d is the highest number.\n", c))));

    return(0);
}