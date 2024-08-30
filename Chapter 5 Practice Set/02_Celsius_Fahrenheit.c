// Write a function to convert Celsius temperature into Fahrenheit.

#include <stdio.h>

float cf_convert(float);

float cf_convert(float n){
    return ( n * 9 / 5 ) + 32;
}
int main(){
    int a;
    printf("Enter a Number:\n");
    scanf("%d", &a);

    printf("Temperature in Fahrenheit is: %.2f \n", cf_convert(a));

    return 0;
}