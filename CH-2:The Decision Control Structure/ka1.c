// Whether the character entered through the keyboard is a lower case alphabet or not

#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a Character:");
    scanf("%c", &ch);

    (ch >= 97 && ch <= 122 ? printf("%c is a lower case alphabet\n", ch) : printf("%c is not a lower case alphabet.\n",ch));

    return(0);
}