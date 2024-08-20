#include <stdio.h>

int main() {
  float es, wp, ps, sl, total, percentage;

  printf("\nEnter Complete Electrical Sciences Marks "
         "(MidSem+FinalSem+Quiz+Assignment)\n:");
  scanf("%f", &es);

  printf("\nEnter Complete Writing Practice Marks "
         "(MidSem+FinalSem+Quiz+Assignment)\n:");
  scanf("%f", &wp);

  printf("\nEnter Complete Probability & Statistics Marks "
         "(MidSem+FinalSem+Quiz+Assignment)\n:");
  scanf("%f", &ps);

  printf("\nEnter Complete Symbolic Logic Marks "
         "(MidSem+FinalSem+Quiz+Assignment)\n:");
  scanf("%f", &sl);

  total = es + wp + ps + sl;
  percentage = (total / 400.0) * 100;

  printf("\nYou have scored a total of %.2f marks out of 400!\n", total);
  printf("\nTotal percentage scored is %.2f%%!\n", percentage);
  printf("\nCongratulations! You have scored %.1f CGPA!\n", percentage / 9.5);
  printf("\nThe score isn't official by BITS, so don't worry!!\n");

  if (percentage<=50){
    printf("But I wonder how someone can score this bad...")
  }

  return 0;
}