/* Anu year is entered through the keyboard. Write a function to determine whether the year is a leap year or not. */

#include <stdio.h>
int main()
{
    void leap(int);

    int year;

    printf("Enter a year : ");
    scanf("%d", &year);
     
    leap(year);

    return(0);
}
void leap (int a)
{
    if(a % 4 == 0)
        printf("%d is a leap year.\n", a);
    else
        printf("%d is not a leap year.\n", a);
    
}