/* A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrewn is input through the keyboard in hundreds, write a program to find the total numberof currency notes of each denomination the cashier will have to give to the withdrawer. */

#include<stdio.h>
int main()
{
    int num,hundred,fifty,ten,total;

    printf("Enter the amount for withdraw in hundreds:");
    scanf("%d",&num);

    hundred=num/100; // To check the total number of hundred notes
    num=num%100; // To find out the number of notes left
    fifty=num/50; // To check the total number of fifty notes
    num=num%50; // To find out the numbe of notes left
    ten=num/10; // To check the total number of ten notes 
    total=hundred+fifty+ten; // To find the total number of notes

    printf("Totol notes of -\n100 = %d\n50 = %d\n10 = %d\nTotal number of notes = %d\n",hundred,fifty,ten,total);

    return(0);
}
