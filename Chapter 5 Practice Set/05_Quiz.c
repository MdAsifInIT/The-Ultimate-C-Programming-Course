// What will the following line produce in a C program:

#include <stdio.h>

int main()
{
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    
    // Here compiler evaluates from Right to left
    // Evaluation Order Right to Left: 6 6 4 
    // Evaluation Order Left to Right: 4 5 5 

    // However, both the answers are correct!
    
    return 0;
}