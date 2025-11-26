//  Write a program to find the octal equivalent of the entered number.

#include <stdio.h>
int main()
{
    int num, m, oct = 0, d;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        m = num % 8;
        num = num / 8;
        oct = oct * 10 + m;
    }
    while(oct > 0)
    {
        m = oct % 10;
        oct = oct / 10;
        num = num * 10 + m;
    }

    printf("%d\n", num);
    return(0);
}