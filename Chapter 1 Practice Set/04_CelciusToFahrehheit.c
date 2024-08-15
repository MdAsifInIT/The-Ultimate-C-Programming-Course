#include <stdio.h>

int main(){
    // Celcius to Fahrenheit converter
    float celcius, fahrenheit;
    
    printf ("Enter the temperature in celcius(degrees):\n");
    scanf ("%f", &celcius);

    printf("Temperature is %.2f degrees fahrenheit", (celcius*9/5)+32);

    return 0;
}