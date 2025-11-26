/* Write a program which to find the grace marks for a student using switch. The user should enter the class obtained by the student and the number of subjects he has failed in.
− If the student gets first class and the number of subjects he failed in is greater than 3, then he does not get any grace. If the number of subjects he failed in is less than or equal to 3 then the grace is of 5 marks per subject.

− If the student gets second class and the number of subjects he failed in is greater than 2, then he does not get any grace. If the number of subjects he failed in is less than or equal to 2 then the grace is of 4 marks per subject.

− If the student gets third class and the number of subjects he failed in is greater than 1, then he does not get any grace. If the number of subjects he failed in is equal to 1 then the grace is of 5 marks per subject. */

#include <stdio.h>
int main()
{
    int sub; 
    char class;

    printf("Enter your a, b and c class and the number of subjects you have failed in:\n");
    scanf("%c %d", &class, &sub);

    switch(class)
    {
        case 'a':
        case 'A':
        if(sub > 3)
            printf("No grace\n");
        else
            printf("Grace is of 5 marks per subject.\n");
        break;
        case 'b':
        case 'B':
        if(sub > 2)
            printf("No grace\n");
        else
            printf("Grace is of 4 marks per subject.\n");
        break;
        case 'c':
        case 'C':
        if(sub > 1)
            printf("No grace\n");
        else
            printf("Grace is of 5 marks per subject.\n");
        break;
        default:
        printf("You entered wrong class.\n");
    }
    return(0);
}

            
