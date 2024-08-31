// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
// earth. Consider g = 9.8m/s2

#include <stdio.h>

float force(float);

int main(){
    
    int m = 2;
    printf("Force = %.2f N", force(m));
    
    return 0;
}

float force(float mass){
    return mass * (9.8);
}