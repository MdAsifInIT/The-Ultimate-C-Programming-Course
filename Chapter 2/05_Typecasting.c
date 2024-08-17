// Typecasting in C is the process of converting a variable from one data type to another,
// either automatically (implicit) or manually (explicit).

#include <stdio.h>

int main() {

    float a = 3.14;
    int b, c = 6.5;
    b = (int)a;
    

    printf("The original number is %f\n", a);
    printf("Typecasted Number is %d \n", b);
    printf("Float value is demoted to int eg: the value of c is %d",c);

    return 0;
}