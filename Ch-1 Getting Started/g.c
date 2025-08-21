/* If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint : Use the modulus operator '%') */

#include<stdio.h>
int main()
{
    int num, sum=0,rem;
    printf("Enter 5 digit integer number:");
    scanf("%d", &num);

    printf("The 5 digit integer number are %d.\n",num);

    rem=num%10; // For take 5th digit
    num=num/10; //For less 5th  digit
    sum=sum+rem; //For add 5th digit in sum

    rem=num%10; // For take 4th digit
    num=num/10; //For less 4th digit
    sum=sum+rem; //For add 4th digit in sum

    rem=num%10; // For take 3rd digit
    num=num/10; //For less 3rd digit
    sum=sum+rem; //For add 3rd digit in sum

    rem=num%10; // For take 2nd digit
    num=num/10; //For less 2nd digit
    sum=sum+rem; //For add 2nd digit in sum

    rem=num%10; // For take 1st digit
    //num=num/10; //For less 1st digit
    sum=sum+rem; //For add 1st digit in sum

    printf("The sum of digits are %d.\n",sum);

    return(0);
}