/* Write a program to fill the entire screen with a smiling face. The smiling face has an ASCII value 1. */

#include <stdio.h>
int main()
{
    int i, j = 42;

    for(i = 1; i <= 2568; i++)
        printf("%c", j);

    return (0);
}
