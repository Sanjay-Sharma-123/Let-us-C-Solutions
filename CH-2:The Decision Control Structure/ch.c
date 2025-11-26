// Find the absolute value of a number entered through thekeyboard.

#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
        printf("Absolute value of %d is %d\n", num, num * -1);
    else
        printf("Absolute value of %d is %d\n", num, num);

    return(0);
}
