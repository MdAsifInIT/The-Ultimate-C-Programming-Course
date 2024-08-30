/*
Function is a way to break our code into chunks so that it is possible for a programmer 
to reuse them.

A function is a block of code which performs a particular task. 
A function can be reused by the programmer in a given program any number of times.

• Execution of a C program starts from main(). 
• A C program can have more than one function. 
• Every function gets called directly or indirectly from main().

*/

#include <stdio.h>

int sum (int, int); // Function prototype

// Function definition, can be written above or below.
int sum (int x, int y){
    printf("The sum is %d\n", x+y);
    return(x+y); // Returns value to the sum part in the code

}

int main(){
    
    sum(5,4);
    sum(4,6);
    sum(18,9);

    return 0;
}