/* Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number. */
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter a integer number :");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("The given number is even.\n");
    else 
        printf("The given number is odd. \n");
    
    return(0);
}