/* Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is grater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter. */

#include <stdio.h>
int main()
{
    int length, breadth, area, perimeter;
    
    printf("Enter breadth and length of a rectangle : ");
    scanf("%d%d", &breadth, &length);

    perimeter = 2 * ( length + breadth);
    area = length * breadth;

    if(area > perimeter)
    {
       printf("Perimeter of rectangle is %d\nAnd Area of rectangle is %d\nSo area of the rectangle is greater than its perimeter.\n", perimeter, area);
    }

    else
    {
        printf("Perimeter of rectangle is %d\nAnd Area of rectangle is %d\nSo area of the rectangle is less than its perimeter.\n", perimeter, area);
    }

    return (0);
}