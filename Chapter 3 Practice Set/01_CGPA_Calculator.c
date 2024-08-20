#include <stdio.h>

int main(){
    float es,wp,ps,sl,total, percentage;

    printf("Enter Complete Electrical Sciences (MarksMidSem+FinalSem+Quiz+Assignment)\n:");
    scanf("%f", &es);

    printf("Enter Complete Writing Practice (MarksMidSem+FinalSem+Quiz+Assignment)\n:");
    scanf("%f", &wp);

    printf("Enter Complete Probability & Statistics (MarksMidSem+FinalSem+Quiz+Assignment)\n:");
    scanf("%f", &ps);

    printf("Enter Complete Symbolic Logic (MarksMidSem+FinalSem+Quiz+Assignment)\n:");
    scanf("%f", &sl);

    total = es+wp+ps+sl;
    percentage = (total/400.0)*100;

    printf("\nYou have scored a total of %.2f marks out of 400!\n", total);
    printf("\nTotal percentage scored is %.2f%%!\n", percentage);
    printf("\nCongratulations! You have scored %.1f CGPA!\n", percentage/9.5);
    printf("\nThe Scored are not official by BITS, so don't worry!!\n");

    return 0;
}