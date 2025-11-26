/* Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D. */

#include<stdio.h>
int main()
{
    int C,D,E;

    printf("Enter two integer numbers");
    scanf("%d %d",&C,&D);
    
    printf("Before interchange numbers are -\nC = %d\nD=%d\n\n",C,D);

    /* Interchange the contents of two variables using a third variable as a temporary store. */ 
    E=C;
    C=D;
    D=E;

    printf("After interchange numbers are -\nC=%d\nD=%d\n\n",C,D);

    return(0);
}