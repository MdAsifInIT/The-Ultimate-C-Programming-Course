/* 

TYPE CONVERSION 
An Arithmetic operation between 
• int and int → int 
• int and float → float 
• float and float → float 
Example: 
o 5/2 becomes 2 as both the operands are int 
o 5.0/2  becomes 2.5 as one of the operands is float 
o 2/5 becomes 0  as both the operands are int

In programming, type compatibility is crucial. For int a = 3.5;, the float 3.5 is 
demoted to 3, losing the fractional part because a is an integer. Conversely, for float 
a = 8;, the integer 8 is promoted to 8.0, matching the float type of a and retaining 
precision.

*/

#include <stdio.h>

int main(){

    float a = 9.0;
    int b = 2;
    float c = a/b;
    int d = 6.7; // The value gets demoted to 6

    printf("The value of a/b is %f\n", c);
    printf("The value of d is %d", d);
    
    return 0;
}