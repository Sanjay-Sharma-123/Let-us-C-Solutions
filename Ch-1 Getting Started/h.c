/*If a five-digit number is input through the keyboard, write a program to reverse the number. */

#include<stdio.h>
int main()
{
    int num, reverse=0,a;

    printf("Enter the five digit integer number:");
    scanf("%d",&num);

    printf("You entered number is %d.\n",num);

    //Target 5th digit 
    a=num%10; //For take 5th digit
    num=num/10; //For remove 5th digit
    reverse=reverse*10+a; // For reverse 5th digit in 1st

    //Target 4th digit 
    a=num%10; //For take 4th digit
    num=num/10; //For remove 4th digit
    reverse=reverse*10+a; // For reverse 4th digit in 2nd

    //Target 3rd digit 
    a=num%10; //For take 3rd digit
    num=num/10; //For remove 3rd digit
    reverse=reverse*10+a; // For reverse 3rd digit in 3rd

    //Target 2nd digit 
    a=num%10; //For take 2nd digit
    num=num/10; //For remove 2nd digit
    reverse=reverse*10+a; // For reverse 2nd digit in 4th

    //Target 1st digit 
    a=num%10; //For take 1st digit
    num=num/10; //For remove 1st digit
    reverse=reverse*10+a; // For reverse 1st digit in 5th

    printf("The reverse numbers are %d.\n",reverse);

    return(0);
}