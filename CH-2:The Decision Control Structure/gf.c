/* If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is is osceles, equilateral, scalene or right angled triangle. */

#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter the value of triangle a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a * a + b * b == c * c)
        printf("Right triangle.\n");
    if(a == b && a == c)
        printf("Equilateral triangle.\n");
    else if(a == b || a == c || b == c)
        printf("Isosceles triangle.\n");
    // else if(a != b || a != c && b != c)
    //     printf("Scalene triangle.\n");
    else
        printf("Scalene Triangle.\n");

    return(0);
}