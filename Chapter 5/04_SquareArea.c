//Use the library function to calculate the area of a square with side a.

#include <stdio.h>
#include <math.h>

int main(){
    double a;
    printf("Enter the length of a of the square:\n");
    scanf("%lf", &a);

    printf("The area of the square is %2.lf square units.\n", pow(a, 2));

    return 0;
}