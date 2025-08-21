/* Write a menu driven program which has following options:
    1. Factorial of a number
    2. Prime or not
    3. Odd or even
    4. Exit

Once a menu item is selected the appropriate action should be taken and once this action is finished, the menu should reapper. Unless the user selects the 'Exit' option the program should continue to work. */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice, i = 1, ans = 1, j, num;

    while(i == 1)
    {
        printf("1. Factorial of a number\n");
        printf("2. Prime or not\n");
        printf("3. Odd or even\n");
        printf("4. Exit\n");
        printf("Enter your choice of the above options:\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                printf("Enter a number:");
                scanf("%d", &num);
                while(num > 0)
                {
                    j = num--;
                    ans = ans * j;
                }
                printf("The factorial of the number is %d.\n\n", ans);
            }
            break;
            case 2:
            {
                printf("Enter a number:");
                scanf("%d", &num);
                if(num % 2 == 0)
                    printf("%d is a not prime number.\n\n", num);
                else
                    printf("%d is a prime number.\n\n", num);
            }
            break;
            case 3:
            {
                printf("Enter a number:");
                scanf("%d", &num);
                if(num % 2 == 0)
                    printf("%d is a even number.\n\n", num);
                else
                    printf("%d is a odd number. \n\n", num);
            }
            break;
            case 4:
            exit(1);
            default:
            printf("You choose a wrong choice.\n\n");
        }
    }

    return(0);
}