/* If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number. */

#include<stdio.h>
int main()
{
    int num,sum=0,a;

    printf("Enter the four-digit integer number:");
    scanf("%d",&num);

    printf("You entered %d\n",num);

    a=num%10; //For take last digit
    num=num/10; //For remove last digit
    sum=sum+a; // For add last digit

    num=num/10; // For remove 3rd digit

    num=num/10; //For remove 2nd digit

    a=num%10; //For take first digit
    //num=num/10; // For remove first digit
    sum=sum+a; // For add First digit

    printf("The sum of first and last digit is %d.\n",sum);

    return(0);
}