/* If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to dermine the youngest of the three. */

#include<stdio.h>
int main()
{
    int ram, shyam, ajay;

    
    printf("Enter the age of Ram, Shyam and Ajay:");
    scanf("%d%d%d", &ram, &shyam, &ajay);

    if(ram > shyam)
    {
        if(ram > ajay)
            printf("Ram is the youngest man.\n");
        else
            printf("Ajay is the youngest man.\n");
    }

    else if(ram > ajay)
    {
        if(ram > shyam)
            printf("Ram is the youngest man.\n");
        else
         printf("Shyam is the youngest man.\n");
    }
    else
        printf("Ajay is the youngest man.\n");

    return(0);
}