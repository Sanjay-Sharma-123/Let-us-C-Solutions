// Whether a character entered through the keyboard is a special symbol or not.

#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a Character:");
    scanf("%c", &ch);

    (ch >= 0 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 127 ? printf("%c is a Special Symbol.\n",ch) : printf("%c is not a Special Symbol.\n",ch));

    return(0);
}