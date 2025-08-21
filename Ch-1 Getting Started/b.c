/* The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters.*/

#include<stdio.h>
int main()
{
    float distance, meters,feets,inches,cm;

    printf("Enter the distance between two cities ");
    scanf("%f",&distance);

    meters=distance*1000;
    feets=meters*3.28084;
    inches=feets*12;
    cm=inches*2.54;

    printf("The distance between two cities are %.2f\n",distance);
    printf("The distance in meters are %.2f\n",meters);
    printf("The distance in feets are %.2f\n",feets);
    printf("The distance in inches are %.2f\n",inches);
    printf("The distance in centimeters are %.2f\n\n",cm);

    return(0);
}