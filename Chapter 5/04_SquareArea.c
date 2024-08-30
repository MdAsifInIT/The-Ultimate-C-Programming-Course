#include <stdio.h>
#include <math.h>

int main(){
    double side;
    printf("Enter the length of side of the square:\n");
    scanf("%lf", &side);

    printf("The area of the square is %2.lf square units.\n", pow(side, 2));

    return 0;
}