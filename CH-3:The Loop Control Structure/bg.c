/*  Write a program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeros entered. */

#include <stdio.h>
int main()
{
    int pos = 0, neg = 0, zero = 0, num;
    char choice;

   do{
        printf("Enter a number:");
        scanf("%d", &num);

        if(num > 0)
            pos++;
        else if(num < 0) 
            neg++;
        else 
            zero++;

        printf("You want one more number then press y otherwise n: ");
        scanf("%c", &choice);
    } while(choice == 'y');
    
    printf("You entered \nPositive number = %d\nNegative number = %d\nAnd zero number = %d\n\n", pos, neg, zero);
    return(0);
}