/* Any character is entered through the keyboard, write a program to determine whether the character entered is a capital letter, a small case letter, a digit or a special symbol.
The following ta le shows the range of ASCII values for various characters. */

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character :");
    scanf("%c", &ch);

    if(ch >= 65 && ch <= 90)
        printf("%c is a Capital letter.\n", ch);
    else if(ch >= 97 && ch <= 122)
        printf("%c is a Small letter.\n", ch);
    else if(ch >= 48 && ch <= 57)
        printf("%c is a Digit.\n", ch);
    else 
        printf("%c is a Special Symbol.\n", ch);

    return(0);
}
