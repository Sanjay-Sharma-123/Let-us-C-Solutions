//Write a function power ( a, b ), to calculate the value of a raised to b.

#include <stdio.h>
#include<math.h>
int main()
{
    int power(int, int);
    int a,b, pow;

    printf("Enter two number:");
    scanf("%d%d", &a, &b);

    pow = power(a, b);

    printf("The value of a raised %d to %d is %d\n", a, b, pow);

    return(0);
}
int power(int a, int b)
{
    int i, powe = a;
    // for(i = 1; i < b; i++)
    // pow = pow * a;
    powe = pow(a,b);
    return(powe);
}