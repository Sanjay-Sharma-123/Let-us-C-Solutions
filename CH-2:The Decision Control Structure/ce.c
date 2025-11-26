/* A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not. */

#include <stdio.h> 
int main()
{
    int num, rev = 0, m, d, equal;

    printf("Enter a five digit number:");
    scanf("%d", &num);
    d = num;
    m = num % 10;
    num = num / 10;
    rev = rev + m * 10000;

    m = num % 10;
    num = num / 10;
    rev = rev + m * 1000;

    m = num % 10;
    num = num / 10;
    rev = rev + m * 100;

    m = num % 10;
    num = num / 10;
    rev = rev + m * 10;

    m = num % 10;
    num = num / 10;
    rev = rev + m;

    printf("The original number is %d \n", d);
    printf("The reverse number is %d\n", rev);

    if(d == rev)
        printf("The original and reversed numbers are equal.\n");
    else
        printf("The original and reversed numbers are not equal. \n");
        
    return(0);
}