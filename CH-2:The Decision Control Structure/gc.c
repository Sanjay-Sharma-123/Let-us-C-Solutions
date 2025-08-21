/* A certain grade of steel is graded according to the following conditions: 
(i) Hardness must be greater than 50 
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600

The grades are as follows :

Grade is 10 if all three conditions are met
Grade is 09 if conditions (i) and (ii) are met
Grade is 08 if conditions (ii) and (iii) are met
Grade is 07 if conditions (i) and (iii) are met
Grade is 06 if only one condition is met
Grade is 05 if none of the conditions are met */

#include <stdio.h>
int main()
{
    int hardness, tensile;
    float carbon;

    printf("Enter the hardness, carbon and tensile of the steel:\n");
    scanf("%d %f %d", &hardness, &carbon, &tensile);

    if(hardness > 50 && carbon < 0.7 && tensile > 5600)
        printf("Grade 10\n\n");
    else if(hardness > 50 && carbon < 0.7)
        printf("Grade 09\n\n");
    else if(carbon < 0.7 && tensile > 5600)
        printf("Grade 08\n\n");
    else if(hardness > 50 && tensile > 5600)
        printf("Grade 07\n\n");
    else if(hardness > 50 || carbon < 0.7 || tensile > 5600)
        printf("Grade 06\n\n");
    else 
        printf("Grade 05\n\n");

    return(0);
}
