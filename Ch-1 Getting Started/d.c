/* Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees.*/

#include<stdio.h>
int main()
{
    float fahrenheit,centigrade;

    printf("Enter the temperature of your city in fahrenhiet");
    scanf("%f",&fahrenheit);

    // centigrade=(fahrenheit-32)*5/9;
     centigrade = 5 * (( fahrenheit - 32)/ 9);

    printf("The temperature of your city is %.2f\n",fahrenheit);
    printf("Convert the temperature of your city in centigrade degrees are %.2f\n\n",centigrade);

    return(0);
}