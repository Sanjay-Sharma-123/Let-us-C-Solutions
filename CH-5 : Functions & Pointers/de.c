/* A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number.
For example, prime factors of 24 are 2, 2, 2 and 3, whereas prime factors of 35 are 5 and 7. */

#include <stdio.h>
int main()
{
    void factor(int);
    int num;

    printf("Enter a number:");
    scanf("%d", &num);

    factor(num);

    return (0);
}
void factor(int num)
{
    int i;
    for(i = 2; i < num; i++)
    {
        while(num % i == 0 || num % i != 0)
        {
            
    }
}