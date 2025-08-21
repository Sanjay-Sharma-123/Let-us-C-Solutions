/* If the marks obtained by a student in five different subjects are input through the keyboard, find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100. */

#include<stdio.h>
int main()
{
    int hindi,english,math,science,sanskrit,total_marks,percentage;

    printf("Enter your obtained marks in Hindi, English, Maths, Science and Sanskrit");
    scanf("%d%d%d%d%d", &hindi,&english,&math,&science,&sanskrit);

    total_marks=hindi+english+math+science+sanskrit;
    percentage=total_marks*100/500;

    printf("Your obtained marks in subjects are -\n");
    printf("Hindi = %d\nEnglish = %d\nMaths = %d\nScience = %d\nSanskrit = %d\n",hindi,english,math,science,sanskrit);

    printf("Your total obtained marks are %d\n",total_marks);
    printf("Your percentage is %d\n\n",percentage);

    return(0);
}
