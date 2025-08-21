/*If a five-digit number is input through the keyboard. Write a program to print a new nubmer by adding one to each of its digits. For example, if the number that is input is 12391, then the output should be displayed as 23402. */

#include<stdio.h>
int main()
{
    int num, add_one=00000,rem;

    printf("Enter a five-digit number:");
    scanf("%d", &num);

    printf("Before adding +1 to each digit = %d\n", num);

    rem=num%10; // To take fifth digit
    num=num/10; // To remove fifth digit
    add_one=add_one+((rem+1)*1); // To write by adding +1 to the fifth place

    rem=num%10; // To take fourth digit
    num=num/10; // To remove fourth digit
    add_one=add_one+((rem+1)*10); // To write by adding +1 to the fouth place

    rem=num%10; // To take third digit
    num=num/10; // To remove third digit
    add_one=add_one+((rem+1)*100); // To write by adding +1 to the third place

    rem=num%10; // To take second digit
    num=num/10; // To remove second digit
    add_one=add_one+((rem+1)*1000); // To write by adding +1 to the second place

    rem=num%10; // To take first digit
    num=num/10; // To remove first digit
    add_one=add_one+((rem+1)*10000); // To write by adding +1 to the first place

    printf("After adding +1 to each digit = %d\n", add_one);

    return(0);
}