// Write a program to determine whether a student has passed or failed. To pass, a 
// student requires a total of 40% and at least 33% in each subject. Assume there 
// are three subjects and take the marks as input from the user.

#include <stdio.h>

int main(){
    float eng,mat,sci,total,percentage;

    printf("\nEnter Marks Scored in English\n:");
    scanf("%f", &eng);    

    printf("\nEnter Marks Scored in Mathematics\n:");
    scanf("%f", &mat);

    printf("\nEnter Marks Scored in Science\n:");
    scanf("%f", &sci);

    total = eng + sci + mat;
    percentage = (total / 300)*100;

    if (total >= 40 && eng > 33 && mat > 33 && sci >33)
        printf("Congratulations! You are pass wth %.2f%%", percentage);
    else 
        printf("You are fail!");


    return 0;
}