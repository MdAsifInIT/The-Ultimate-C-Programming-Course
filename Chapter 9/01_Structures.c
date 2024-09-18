// Structures can hold → Dissimilar data.
// They are declared outside of the main function.

#include <stdio.h>
#include <string.h>

struct employee 
{ 
    int code; // This declares a new user defined data type! 
    float salary; 
    char name[10]; 
}; // semicolon is important

int main(){
    struct employee e1, e2;
    e1.code = 50003789;
    e1.salary = 12.5;
    strcpy(e1.name, "Ryumen Hoaren");

    printf("%d %.2f %s", e1.code, e1.salary, e1.name);

    return 0;
}