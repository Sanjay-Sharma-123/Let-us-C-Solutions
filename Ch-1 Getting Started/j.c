/* In a town, the percentage of men is 52. The percentage of total literacy is 48. If total percetnage of literate men is 35 of the total population, write a program to find the total number of illiterate men and women if the population of the town is 80000. */

#include<stdio.h>
int main()
{
    int population=80000,total_man,literate_man,illiterate_man,total_literacy;
    int total_woman,literate_woman,illiterate_woman;

    total_man=population*52/100;
    literate_man=population*35/100;
    total_literacy=population*48/100;
    illiterate_man=total_man-literate_man;
    total_woman=population-total_man;
    literate_woman=total_literacy-literate_man;
    illiterate_woman=total_woman-literate_woman;

    printf("Total population = %d\nTotal man = %d\nLiterate man = %d\nilliterate man = %d\n",population,total_man,literate_man,illiterate_man);

    printf("Total Literacy = %d\nTotal woman = %d\nLiterate woman = %d\nIlliterate_woman = %d\n",total_literacy,total_woman,literate_woman,illiterate_woman);

    return(0);
}