/* The length & breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle. */

#include<stdio.h>
int main()
{
    int length,breadth,area_rect,perimeter_rect, radius;
    float area_circle,circumference_circ;

    printf("Enter lenght and breadth of rectangle");
    scanf("%d %d", &length,&breadth);

    printf("Enter radius of circle");
    scanf("%d",&radius);

    area_rect=length*breadth; //Area of rectangle = b*l
    perimeter_rect=2*(length+breadth); //Perimeter of rectangle = 2(l+b)

    area_circle=3.14*radius*radius; //Area of circle = πr2
    circumference_circ=2*3.14*radius; // Circumference of circle = 2πr


    printf("Perimeter of rectangle is %d\nAnd area of rectangle is %d\n\n",perimeter_rect,area_rect);

    printf("Circumference of circle is %.2f\nAnd area of circle is %.2f\n\n",circumference_circ,area_circle);

    return(0);
}